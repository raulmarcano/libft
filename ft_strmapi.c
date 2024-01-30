/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:57:46 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/30 15:58:18 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	int		len;
	int		i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = ft_calloc((len + 1), (sizeof(char)));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*
int	main()
{
	printf("%s", ft_strmapi("hola", ))
	return (0);
}*/