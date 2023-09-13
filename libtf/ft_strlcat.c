/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:12:17 by javperez          #+#    #+#             */
/*   Updated: 2023/09/13 16:00:59 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, char *src)/*, size_t size*/
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i ++;
	}
	src[i] = dst[0];
	printf ("%c", src[i]);
	return (0);
}
int	main()
{
	char	src[] = "Javier";
	char	dst[] = "Hola";
	//int		len;

	ft_strlcat(dst, src);
	//len = 3;
	//printf("La funcion strlcat saca esto: %lu", strlcat(dst, src, len));
}

//Suma las dos cadenas "Javier" y "Hola" en dest y saca el numero de las dos cadenas juntas hasta 'l' numero.
// En este caso si len = 3, sacaria 9. Javier + Hol
