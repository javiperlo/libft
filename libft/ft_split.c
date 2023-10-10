/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:47:50 by javperez          #+#    #+#             */
/*   Updated: 2023/10/10 11:19:16 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(const char *s, char c)
{
	int		count;
	int		i;
	int		len;

	count = 0;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (count_strings(s, c) + 1));
	if (!s || !str)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (s[j] != c && s[j])
				j++;
			str[i++] = ft_substr(s, 0, j);
			s += j;
		}
		else
			s++;
	}
	str[i] = NULL;
	return (str);
}
/*
int	main(void)
{
	char *s = "hello!";
	char c = ' ';
	char	**str;

	str = ft_split(s, c);
	printf ("%s\n", str[2]);
	return (0);
}*/