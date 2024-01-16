/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:09:27 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/15 17:01:51 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*mem;
	size_t			i;

	mem = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		mem[i] = c;
		i++;
	}
	return (b);
}
/*
int main()
{
	int		size;
	int 	c;
	char	str[] = "harry potter";
	size = ft_strlen(str);
	c = '8';

	ft_memset(str, c, size);
	return(0);
}*/
