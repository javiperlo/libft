/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:47:50 by javperez          #+#    #+#             */
/*   Updated: 2023/09/18 13:31:06 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_split(char const *s, char c)
{
	char	*ptr;
	
	ptr = malloc((ft_strlen (s) * sizeof(char)));
	if (!ptr)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)&*s); //Devuelvo la direccion de memoria en la que esta el puntero
		}
		
		s ++;
	}
	
	return (ptr);
}

int		main(void)
{
	char	str[] = "q hola que tal";
	char	c;

	c = 'q';
	printf ("%s",ft_split(str, c));
}