/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:21:25 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/17 16:18:53 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	real_dstsize;
	size_t	src_size;
	size_t	i;

	real_dstsize = ft_strlen((const char *)dst);
	src_size = ft_strlen(src);
	i = 0;
	if (real_dstsize >= dstsize || dstsize == 0)
		return (dstsize + src_size);
	while (src[i] != '\0' && i < dstsize - real_dstsize - 1)
	{
		dst[real_dstsize + i] = src[i];
		i++;
	}
	dst[real_dstsize + i] = '\0';
	return (real_dstsize + src_size);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char    dest[10] = "oa";
    const char      src[10] = "mundo";
    printf("%lu", ft_strlcat(dest, src, 10));
	printf("\n");
	printf("%lu", strlcat(dest, src, 10));
    return (0);
}*/
