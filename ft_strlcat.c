/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:21:25 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/15 17:02:41 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	real_dstsize;
	size_t	src_size;
	size_t	i;

	real_dstsize = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (real_dstsize < dstsize - 1)
	{
		i = 0;
		while ((real_dstsize + i + 1) < dstsize && src[i] != '\0')
		{
			dst[real_dstsize + i] = src[i];
			i++;
		}
		dst[real_dstsize + i] = '\0';
	}
	return (real_dstsize + src_size);
}
