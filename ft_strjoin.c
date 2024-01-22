/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:20:50 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/22 15:59:58 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	cat_len;
	size_t	i;
	size_t	j;
	char	*cat;

	cat_len = ((ft_strlen(s1)) + (ft_strlen(s2)) + 1);
	cat = (char *)malloc(cat_len);
	if (cat == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		cat[i] = s2[j];
		i++;
		j++;
	}
	cat[i] = '\0';
	return (cat);
}
/*
#include <stdio.h>
int main()
{
	char *str3 = ft_strjoin("Este es" ," el string");
	printf("%s", str3);
	return (0);
}*/
