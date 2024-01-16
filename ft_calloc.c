/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:48:23 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/16 13:45:46 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*arr;
	int	i;

	arr = malloc(count * size);
	i = 0;
	if (arr != NULL)
	{
		while (i < count)
		{
			arr[i] = 0;
			i++;
		}
	}
	return (arr);
}
