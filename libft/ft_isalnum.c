/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:58:32 by javperez          #+#    #+#             */
/*   Updated: 2023/09/16 16:46:48 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
/*
int	main()
{
	char	c;
	c = '.';
	int		res;

	res = ft_isalpha(c);
	printf ("%d\n", res);
	return (0);
}*/