/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:12:17 by javperez          #+#    #+#             */
/*   Updated: 2023/09/13 18:57:10 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	while (dst[i] != '\0')
	{
		i ++;
	}
	while (src[j] != '\0' && j < size)
	{
		dst[i + j] = src[j];
		j ++;
	}
	dst[i + j] = '\0';
	return (i + j);
}
/*
int	main()
{
	char	src[] = "Javi";
	char	dst[] = "Hola";
	int		len = 1;
	int		res;
	
	res = ft_strlcat(dst, src, len);
	printf("Mi funcion saca este resultado: %d", res);
	//printf("La funcion strlcat saca esto: %lu", strlcat(dst, src, len));
}
*/
//Suma las dos cadenas "Javier" y "Hola" en dest y saca el numero de las dos cadenas juntas hasta 'l' numero.
// En este caso si len = 3, sacaria 9. Javier + Hol
