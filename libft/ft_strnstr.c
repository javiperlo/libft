/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:28:02 by javperez          #+#    #+#             */
/*   Updated: 2023/09/15 14:50:48 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	
}
*/
int	main(void)
{
	char	str1[] = "hola que tal";
	char	str2[] = "tal";
	size_t	len = 20;

	printf ("%s", strnstr(str1, str2, len));
}
/*
Busca la secuencia de carácteres contenida en la subcadena en una cadena de texto.

Esta función determinará si la cadena contiene a la subcadena (como "CASA" contiene "ASA") y, en caso afirmativo
indicará en que posición aparece la subcadena dentro de la cadena (de 0 en adelante, 1 en el ejemplo anterior).
En caso de aparecer la subcadena varias veces, la función siempre retornará la posición primera.

En este ejemplo se utiliza la función strnstr() para que determine dónde se encuentra la subcadena "es" dentro de micadena.
Retornará la posición 5, debido a que la función distingue entre mayúsculas y minúsculas
por lo que no se reconoce la subcadena "Es" (de "Esta") que se encuentra en la posición 0 de la cadena.
*/