/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:35:05 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/15 17:00:56 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
		n--;
	}
	return (NULL);
}
