/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:40:18 by javperez          #+#    #+#             */
/*   Updated: 2023/09/17 10:56:00 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr = malloc(ft_strlen(s) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < ft_strlen(s))
	{
		if ((unsigned int)i >= start && (size_t)i < len)
		{
			((char *)ptr)[j] = s[i];
			j ++;
		}
		i ++;
	}
	return ((char *)ptr);
}
/*
int	main(void)
{
	char str1[] = "substr function Implementation";
	int	start = 7;
	int	end = 12;

	//ft_substr(str1, start, end);
	printf ("Mi funcion funciona, este es el resultado: \n");
	//ft_substr (str1, start, end);
	printf ("%s", ft_substr(str1, start, end));
}*/