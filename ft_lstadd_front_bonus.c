/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:16:46 by rmarcano          #+#    #+#             */
/*   Updated: 2024/02/05 14:17:09 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
//Recuerda compilar lstnew también
int main(void)
{
	t_list *lst;
	t_list *front;
	t_list *current;
	
	lst = ft_lstnew("first node");
	lst->next = ft_lstnew("second node");
	front = ft_lstnew("In Front");
	
	ft_lstadd_front(&lst, front);
	
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
} 
*/