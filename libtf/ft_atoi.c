/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:22:46 by javperez          #+#    #+#             */
/*   Updated: 2023/09/13 11:29:38 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
			i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i]  - '0');
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char	str[] = "--1234";
	printf("MI ATOI\n");
	printf ("%d", ft_atoi(str));
	printf("\nATOI ORIGINAL\n");
	printf("%d", atoi(str));
}