/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:19:33 by javperez          #+#    #+#             */
/*   Updated: 2023/09/16 16:47:04 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
}
/*
int	main(void)
{
	char	src[] = "javi";
	char	dst[] = "hola";
	size_t	len;

	len = 4;
	printf ("Función Original: %s\n", (char *)memmove(dst, src, len));
	printf ("Mi función: %s\n", (char *)ft_memmove(dst, src, len));
}*/