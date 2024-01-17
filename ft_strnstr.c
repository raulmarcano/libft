/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:36:03 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/17 17:13:10 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] && haystack[i] && needle[j] == haystack[i] && i < len)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i - j]);
		i = i - j + 1;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *haystack = "lorem ipsum dolor sit amet";
    const char *needle = "dolor";

    char *result_strnstr = strnstr(haystack, needle, 15);
    
	printf("strnstr result: %s\n", result_strnstr);

    char *result_ft_strnstr = ft_strnstr(haystack, needle, 15);
    
	printf("ft_strnstr result: %s\n", result_ft_strnstr);

	return 0;
}*/
