/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:25:30 by javperez          #+#    #+#             */
/*   Updated: 2023/09/14 13:18:21 by javperez         ###   ########.fr       */
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
	while (str[i] != (char)c)
	{	
		i ++;
	}
	j = str[i];
	return (0);
}

int main(void)
{
	char	str[] = "hola mundo";
	int		c = 'm';

	//printf("Funcioón ORIGINAL: %s\n", strchr(str, c));
	printf("Función MIA: %s\n", ft_strchr(str, c));
}