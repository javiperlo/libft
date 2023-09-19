/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:52:47 by javperez          #+#    #+#             */
/*   Updated: 2023/09/19 13:58:01 by javperez         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
    char *str;
    int i;
	int	numDigits;
	int	isNeg;

	isNeg = 0;
    i =  0;
    numDigits = get_digits(n);
    str = (char *)malloc(sizeof(char) * (get_digits(n) + 1));
	if (str == NULL)
        return (NULL);
    if (n < 0)
    {
		isNeg = 1;
        n = n * -1;
		i++;
    }
    if (i == 1)
	{
        str[0] = '-';
	}
	while (numDigits > 0)
	{
        str[i] = (n % 10) + '0';
		n = n / 10;
        numDigits--;
        i++;
	}
	if (isNeg == 1)
		ft_rev((&str[1]));
	else
		ft_rev(str);	
    return (str);
}
int	main(void)
{
	printf("%s", ft_itoa(-23020));
}