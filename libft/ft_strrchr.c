/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:51:47 by javperez          #+#    #+#             */
/*   Updated: 2023/09/14 19:49:21 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *str, int c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			j = i;
		}
		i ++;
	}
	if (str[j] == (char)c)
	{
		return (&str[j]);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "m? ola undo";
	int		c = 'o';

	printf ("%s\n", ft_strrchr(str, c));
	return (0);
}*/