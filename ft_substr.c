/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:27:36 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/22 15:47:41 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s || start > ft_strlen(s))
	{
		sub = (char *)(malloc(1 * sizeof(char)));
		sub[0] = '\0';
		return (sub);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = (char *)(malloc(sizeof(char) * (len + 1)));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s", ft_substr("Hola que tal", 2, 18446744073709551614));
	return (0);
}*/