/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:52:47 by javperez          #+#    #+#             */
/*   Updated: 2023/09/21 16:54:17 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_digits(int n)
{
	int		contador;

	contador = 0;
	while (n != 0)
	{
		n = n / 10;
		contador ++;
	}
	return (contador);
}

char	*ft_rev(char *str)
{
	int		i;
	int		j;
	char	aux;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		aux = str[j];
		str[j] = str[i];
		str[i] = aux;
		i++;
		j--;
	}
	return (str);
}

int	ft_isneg(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		num_digits;
	int		is_neg;

	is_neg = 0;
	num_digits = get_digits(n);
	i = 0;
	str = (char *)malloc(sizeof(char) * (num_digits + ft_isneg(n) + 1));
	if (!str)
		return (NULL);
	if (ft_isneg(n) == 1)
	{
		is_neg = 1;
		str[i++] = '-';
		n = -n;
	}
	while (num_digits > 0)
	{
		str[i++] = (n % 10) + '0';
		n = n / 10;
		num_digits--;
	}
	ft_rev(str + is_neg);
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(20));
}*/
