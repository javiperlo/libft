/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:27:55 by javperez          #+#    #+#             */
/*   Updated: 2023/09/26 21:15:28 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr = malloc((ft_strlen(s1)) * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
		{
			ptr[j] = s1[i];
			j++;
		}
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	s1[] = "vvvvvvvHola?";
	char	set[]= "v";

	//ft_strtrim(s1, set);
	printf ("%s", ft_strtrim(s1, set));
}*/