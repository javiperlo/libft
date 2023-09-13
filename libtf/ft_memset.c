/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:19:23 by javperez          #+#    #+#             */
/*   Updated: 2023/09/13 11:35:42 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[10] = "0123456789";
	int		c = 65;
	size_t	len = 5;

	printf("Before: %s\n", str);
	ft_memset(str, c, len);
	printf("After: %s\n", str);
	return (0);
}*/