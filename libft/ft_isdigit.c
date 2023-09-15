/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:54:09 by javperez          #+#    #+#             */
/*   Updated: 2023/09/12 10:57:47 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_isdigit(int num)
{
	if (num >= 0 && num <= 9)
	{
		return (1);
	}
	return (0);
}
/*
int	main()
{
    int     num;

    num = 'a';
	int		res;

	res = ft_isdigit(num);
	printf ("%d\n", res);
	return (0);
}*/