/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:52:47 by javperez          #+#    #+#             */
/*   Updated: 2023/09/18 20:05:28 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_digits(int n)
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
	char	*result;
	int		i;
	printf ("El número %d, tiene %d dígitos.\n",n , get_digits(n));
	 
	i = 0;
	if (n == 0)	
	{
		result = (char *)malloc(2);
		result[0] = '0';
		result[1] = '\0';
	}
	else
	{
		result = (char *)malloc(get_digits(n) + 1);
		printf ("El número %d es mayor que 0 por lo que se asignan: %d bytes. Incluyendo el nulo", n, get_digits(n) + 1);
		int div = n / 10;
		int	mod = n % 10;
	}
	return (result);
}

int	main(void)
{
	char	*res;
	
	res = ft_itoa(22);
	printf("%s", res);
}