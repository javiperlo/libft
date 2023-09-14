/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:25:30 by javperez          #+#    #+#             */
/*   Updated: 2023/09/14 13:50:11 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strchr(char *str, int c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{	
		if (str[i] == (char)c)
		{
			return (&str[i]);
		}
		i ++;
	}
	return (NULL);
}
/*
int main(void)
{
	char	str[] = "";
	int		c = 'd';
	//ft_strchr(str, c);
	printf("Funcioón ORIGINAL: %s\n", strchr(str, c));
	printf("Función MIA: %s\n", ft_strchr(str, c));
}*/