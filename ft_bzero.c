/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:47:17 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/11 12:28:18 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*string;

	string = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (string[i] != '\0')
			string[i] = '\0';
		i++;
	}
	return ;
}
/*
int	main()
{
	
	int	size = 4;
	char s[] = "alojomora";

	ft_bzero(s, size);
	return (0);
}*/
