/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:56:16 by javperez          #+#    #+#             */
/*   Updated: 2023/09/17 11:20:52 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		*ptr;
	int		j;

	i = 0;
	j = 0;
	ptr = malloc ((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		((char *)ptr)[i] = s1[i];
		i ++;
	}
	while (s2[j] != '\0')
	{
		((char *)ptr)[i + j] = s2[j];
		j ++;
	}
	return ((char *)ptr);
}
/*
int	main(void)
{
	char	s1[] = "?";
	char	s2[] = "sd";

	//ft_strjoin(s1, s2);
	printf("%s", ft_strjoin(s1, s2));
}*/
/* DESCRIPCIÓN 
	Reserva (con malloc(3)) y devuelve una nueva
	string, formada por la concatenación de ’s1’ y
	’s2’.
*/