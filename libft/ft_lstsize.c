/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:03:11 by javperez          #+#    #+#             */
/*   Updated: 2023/09/24 14:21:34 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst != NULL)
	{
		i ++;
		lst = lst -> next;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*lst;
	int		i;
	
	i = 0;
	lst = malloc(sizeof(t_list));
	lst->content = (void *)3;
	lst->next = malloc(sizeof(t_list));
	lst->next->content = (void *)2;
	lst->next->next = NULL;
	i = ft_lstsize(lst);
	printf("Esta lista enlazada contiene %d elementos\n", i);
	return (0);
}
*/