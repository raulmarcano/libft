/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:50:13 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/16 14:19:22 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int		size;
	int		i;
	char	*arr;

	if (!s1)
		return (0);
	size = (ft_strlen(s1) + 1);
	arr = (char *)malloc(size * sizeof(char));
	i = 0;
	if (!arr)
		return (0);
	while (i < size)
	{
		arr[i] = s1[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
