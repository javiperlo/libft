/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:22:46 by javperez          #+#    #+#             */
/*   Updated: 2023/09/12 19:39:55 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		res;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\r')
		i ++;
	/*
	else if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			sign = 1;
		else if (str[i] == '-')
			sign = -1;
		i ++;
	}*/
	else if (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i ++;
	}
	return (res * sign);
	
}

int	main(void)
{
	char	str[] = "1234";
	int res;
	res = ft_atoi(str);
	printf("%d",res);
	//printf("MI ATOI\n");
	//printf ("%d", ft_atoi(str));
	printf("\nATOI ORIGINAL\n");
	printf("%d", atoi(str));
}