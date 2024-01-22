/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:48:50 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/22 18:07:41 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	if (s1 == NULL)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (len > 0 && ft_strrchr(set, s1[len]))
		len--;
	trimed = ft_substr(s1, i, len - i + 1);
	if (!trimed)
		return (NULL);
	else
		return (trimed);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_strtrim("", ""));
	return (0);
}*/
