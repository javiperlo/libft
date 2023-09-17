/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:25:30 by javperez          #+#    #+#             */
/*   Updated: 2023/09/17 15:28:35 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i ++;
	}
	return (NULL);
}
/*
int main(void)
{
	char	str[] = "onde estas";
	int		c = 'd';
	//ft_strchr(str, c);
	printf("Funcioón ORIGINAL: %s\n", strchr(str, c));
	printf("Función MIA: %s\n", ft_strchr(str, c));
}*/