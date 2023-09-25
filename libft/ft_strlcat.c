/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:12:17 by javperez          #+#    #+#             */
/*   Updated: 2023/09/25 18:38:41 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	while (dst[i] != '\0')
	{
		i ++;
	}
	while (src[j] != '\0' && j < size - 1)
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
	char	src[] = "Holaa";
	char	dst[] = "Adiosa";
	int		size = 2;
	
	//printf("La funcion strlcat saca esto: %lu\n", strlcat(dst, src, size));
	printf("Mi funcion saca este resultado: %lu\n",ft_strlcat(dst, src, size));

}*/