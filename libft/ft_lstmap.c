/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:21:17 by javperez          #+#    #+#             */
/*   Updated: 2023/10/04 12:04:18 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_n;
	t_list	*ele_n;

	if (!f || !lst)
		return (NULL);
	list_n = NULL;
	while (lst)
	{
		ele_n = ft_lstnew(f(lst->content));
		if (!ele_n)
			ft_lstclear(&list_n, del);
		ft_lstadd_back(&list_n, ele_n);
		lst = lst->next;
	}
	return (list_n);
}
