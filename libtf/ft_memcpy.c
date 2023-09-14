/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:23:40 by javperez          #+#    #+#             */
/*   Updated: 2023/09/13 15:03:30 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i ++;
	}
	return (dest);
}
/*
int main()
{
	char	src[] = "javi";
	char	dest[] = "raul";
	int		n = 4;

	printf ("MI FUNCION:\n");
	printf ("Dest vale: %s\n", dest);
	ft_memcpy (dest, src, n);
	printf ("Dest ahora vale: %s\n", dest);
	printf("FUNCION ORIGINAL\n");
	memcpy(dest, src, n);
	printf ("Dest ahora vale: %s\n", dest);
	return (0);
}*/