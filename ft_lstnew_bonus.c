/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:20:39 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/31 18:20:41 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
/*
#include <stdio.h>

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

    // Check if node creation was successful
    if (node1 && node2 && node3)
    {
        // Link the nodes together
        node1->next = node2;
        node2->next = node3;

        // Print the content of each node
        printf("Content of node 1: %d\n", *((int *)(node1->content)));
        printf("Content of node 2: %d\n", *((int *)(node2->content)));
        printf("Content of node 3: %d\n", *((int *)(node3->content)));

        // Print the addresses of the next nodes
        printf("Address of the next from node 1: %p\n",(void *)(node1->next));
        printf("Address of the next from node 2: %p\n",(void *)(node2->next));
        printf("Address of the next from node 3: %p\n",(void *)(node3->next));

        // Free the allocated memory for the nodes
        free(node1);
        free(node2);
        free(node3);
    }
    else
    {
        // Print an error message if node creation failed
        fprintf(stderr, "Error creating one or more nodes.\n");
    }

    return (0);
}
*/