/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:28:02 by javperez          #+#    #+#             */
/*   Updated: 2023/09/16 16:47:27 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
			j++;
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		i ++;
		j = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str1[] = "hola que tal"; //Cadena larga (haystack)
	char	str2[] = "que"; //Cadena a buscar (needle)
	size_t	len = 10;
	printf ("La funcion ORIGINAL: %s\n", strnstr(str1, str2, len));
	printf ("Mi funcion: %s", ft_strnstr((char *)str1, (char *)str2, len));
}*/
/*
Busca la secuencia de carácteres 
contenida en la subcadena en una cadena de texto.

Esta función determinará si la cadena contiene a 
la subcadena (como "CASA" contiene "ASA") y, en caso afirmativo
indicará en que posición aparece la subcadena 
dentro de la cadena (de 0 en adelante, 1 en el ejemplo anterior).
En caso de aparecer la subcadena varias veces, 
la función siempre retornará la posición primera.

En este ejemplo se utiliza la función strnstr() 
para que determine dónde se encuentra la subcadena "es" dentro de micadena.
Retornará la posición 5, debido a 
que la función distingue entre mayúsculas y minúsculas
por lo que no se reconoce la subcadena 
"Es" (de "Esta") que se encuentra en la posición 0 de la cadena.
*/