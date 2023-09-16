/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:23:14 by javperez          #+#    #+#             */
/*   Updated: 2023/09/16 16:46:54 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t		i;

	i = 0;
	while (((char *)str1)[i] != '\0' && ((char *)str2)[i] != '\0' && i < n)
	{
		if (((char *)str1)[i] == ((char *)str2)[i])
		{
			i ++;
		}
		else
			return (((char *)str1)[i] - ((char *)str2)[i]);
	}
	return (0);
}
/*
int main()
{
	char str1[] = " h";
	char str2[] = "<H";
	int n;
	int puntero;

	n = 2;
	printf("La función ORIGINAL: %d\n", memcmp(str1, str2, n));
	puntero =  ft_memcmp(str1, str2, n);
	printf("La función MIA: %d\n", puntero); 
}*/