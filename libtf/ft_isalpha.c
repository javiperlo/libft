/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:37:39 by javperez          #+#    #+#             */
/*   Updated: 2023/09/14 11:06:49 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main()
{
	char	c;
	c = '[';
	int		res;

	res = ft_isalpha(c);
	printf ("%d\n", res);
	return (0);
}*/