/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:37:26 by rmarcano          #+#    #+#             */
/*   Updated: 2024/02/07 21:37:29 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
    while (lst != NULL)
    {
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstdelone(new_list, del);
			return (NULL);
		}
		node->content = f(lst->content);
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
    }
	return (new_list);
}
