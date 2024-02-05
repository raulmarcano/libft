/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:09:09 by rmarcano          #+#    #+#             */
/*   Updated: 2024/02/05 17:09:27 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main()
{
    // Test data
    int test_data1 = 42;
    int test_data2 = 24;
    int test_data3 = 56;

    // Create three nodes using ft_lstnew_bonus
    t_list *node1 = ft_lstnew(&test_data1);
    t_list *node2 = ft_lstnew(&test_data2);
    t_list *node3 = ft_lstnew(&test_data3);

	// Link the nodes together
	node1->next = node2;
	node2->next = node3;
	printf("%d", ft_lstsize(node1));
	return (0); 
}*/