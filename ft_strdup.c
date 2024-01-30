/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:50:13 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/18 13:58:26 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		size;
	size_t		i;
	char		*arr;

	size = (ft_strlen(s1) + 1);
	arr = malloc(size * sizeof(char));
	i = 0;
	if (!arr)
		return (NULL);
	while (i + 1 < size)
	{
		arr[i] = s1[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
