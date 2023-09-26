/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:40:18 by javperez          #+#    #+#             */
/*   Updated: 2023/09/26 18:42:13 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*ptr;
	int			i;
	size_t		j;

	i = start;
	j = 0;
	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ptr);
	while (s[i] != '\0' && j < len)
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char str1[] = "";
	int	start = 5;
	int	end = 2;
	printf ("%s", ft_substr(str1, start, end));
}*/
