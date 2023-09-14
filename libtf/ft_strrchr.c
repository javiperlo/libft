/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:51:47 by javperez          #+#    #+#             */
/*   Updated: 2023/09/14 14:46:51 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *str, int c)
{
	int		i;
	int		count;
	
	count = 0;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return (&str[i]);
		}
		i ++;
	}
	printf ("El contador de Coincidencias vale: %d", count);
	return (NULL);
}

int	main(void)
{
	char	str[] = "m? mola mundo";
	int		c = 'm';

	printf ("%s\n", ft_strrchr(str, c));
	return (0);
}