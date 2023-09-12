/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:58:32 by javperez          #+#    #+#             */
/*   Updated: 2023/09/12 11:09:40 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int num)
{
	if ((num >= 'A' && num <= 'z') || (num >= '0' && num <= '9'))
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