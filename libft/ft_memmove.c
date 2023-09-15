/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:19:33 by javperez          #+#    #+#             */
/*   Updated: 2023/09/15 17:16:28 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	while (((char *)src)[i] != '\0' && i < len)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i ++;
	}
	
	if (((char *)src)[0] == '\0'||((char *)dst)[0] == '\0')
	{
		return ("\0");
	}
	
	((char *)dst)[i] = '\0';
	return ((char *)dst);
		
}
/************************************************************************************************************/
//ESTE ES EL BUENO HECHO POR LA IA
/*
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len --;
		}
	}
	else
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i ++;
		}
	}
	return (dst);
}*/
/************************************************************************************************************/

// Repasar los Finales de linea habra que meter allgunos
int	main(void)
{
	char	src[] = " a";
	char	dst[] = " a";
	size_t	len;

	len = 1;
	printf ("Función Original: %s\n", (char *)memmove(dst, src, len));
	printf ("Mi función: %s\n", (char *)ft_memmove(dst, src, len));
}