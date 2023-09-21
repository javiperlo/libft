/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:39:21 by javperez          #+#    #+#             */
/*   Updated: 2023/09/21 12:04:13 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (((char *)str)[i] != '\0')
	{
		if ((((char *)str)[i] == c) && i < n)
		{
			return (&((char *)str)[i]);
		}
		i ++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char cadena[] = "Eraese una nohay.desbordamientodememoriaaaaaaaaaaaaaaaaaa";
	char *puntero; 
	char *puntero_funcion_original;
	
	char	caracter = '.';
	int	len = 17;
	puntero = (char *)ft_memchr( cadena, caracter, len);
	puntero_funcion_original = (char *)memchr(cadena, caracter, len);
	printf( "La cadena original es: %s\n\n", cadena); 
	printf( "%s\n\n", puntero ); 
	printf( "%s\n\n", puntero_funcion_original); 
	return 0;
}*/