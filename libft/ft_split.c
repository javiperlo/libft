/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:47:50 by javperez          #+#    #+#             */
/*   Updated: 2023/09/21 17:48:59 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_strings(char *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 0;
	j = 0;
	k = 0;
	str = (char **)malloc(sizeof(char *) * (count_strings((char *)s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			str[k] = (char *)malloc(sizeof(char) * (j + 1));
			if (!str[k])
				return (NULL);
			j = 0;
			while (s[i] != c && s[i] != '\0')
			{
				str[k][j] = s[i];
				i++;
				j++;
			}
			str[k][j] = '\0';
			k++;
		}
		else
			i++;
	}
	str[k] = '\0';
	return (str);
}

int	main()
{
	char *s = "Hola que tal";
	char c = ' ';
	char **str;

	str = ft_split(s, c);
	printf ("%s\n", str[2]);
	return (0);
}