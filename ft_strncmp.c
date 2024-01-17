/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:20:57 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/17 17:40:10 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n < 1)
		return (0);
	else
	{
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && n > i)
			i++;
		if (i == n)
			return (0);
		else
			return (s1[i] - s2[i]);
	}
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *str1 = "test2";
    const char *str2 = "test1";

    int result_ft = ft_strncmp(str1, str2, 6);
    printf("Resultado de ft_strncmp: %d\n", result_ft);

    int result_original = strncmp(str1, str2, 6);
    printf("Resultado de strncmp: %d\n", result_original);

    return 0;
}*/
