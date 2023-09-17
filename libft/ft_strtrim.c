/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:27:55 by javperez          #+#    #+#             */
/*   Updated: 2023/09/17 12:08:10 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		*ptr;
	int		i;

	i = 0;
	ptr = malloc(ft_strlen(s1) * sizeof(char));
	printf ("Se ha reservado una memoria de malloc de: %ld bytes\n\n", ft_strlen(s1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		
	}
	return ((char *)ptr);
	
}

int	main(void)
{
	char	s1[] = "Javier";
	char	set[]= "a";

	//ft_strtrim(s1);
	printf ("%s", ft_strtrim(s1, set));
}