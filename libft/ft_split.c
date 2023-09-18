/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:47:50 by javperez          #+#    #+#             */
/*   Updated: 2023/09/18 17:43:30 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	str = (char **)malloc(sizeof(char *) * (j + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			str[k] = (char *)malloc(sizeof(char) * (j + 1));
			if (!str[k])
				return (NULL);
			j = 0;
			while (s[i] != c)
			{
				str[k][j] = s[i];
				i++;
				j++;
			}
			str[k][j] = '\0';
			k++;
		}
		i++;
	}
	str[k] = NULL;
	return (str);
}
/*
int	main()
{
	char *s = "Hola que tal";
	char c = ' ';
	char **str;

	str = ft_split(s, c);
	printf ("%s\n", str[0]);
	return (0);
}*/