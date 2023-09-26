/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:52:47 by javperez          #+#    #+#             */
/*   Updated: 2023/09/26 21:37:17 by javperez         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	int		i;
	char	*dest;
	long	nb;

	nb = n;
	i = get_digits(nb);
	dest = malloc((sizeof(char) * (i + 1)));
	if (!dest)
		return (NULL);
	dest[i--] = '\0';
	if (nb < 0)
	{
		i ++;
		dest[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		dest[0] = '0';
	while (nb > 0)
	{
		dest[i--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (dest);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(-1000034));
}*/