/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:25:21 by rmarcano          #+#    #+#             */
/*   Updated: 2024/02/05 17:25:38 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
//Recuerda compilar lstnew también
int main(void)
{
	t_list *lst;
	t_list *front;
	t_list *last;
	cd
	lst = ft_lstnew("first node");
	lst->next = ft_lstnew("second node");
	lst->next = ft_lstnew("Last node");
	front = ft_lstnew("In Front");
	last = ft_lstlast(lst);
	printf("%s\n", (char *)last->content);
} 
*/