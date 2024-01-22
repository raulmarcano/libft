/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:54:32 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/22 20:12:19 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char **ft_split(char const *s, char c);
{
	char **p;
	int i;
	int j;
	
	i = 0;
	while (!s[i])
	{
		if (s[i] == c)
			
			
		i++;
	}
}

int	main()
{
	ft_split("Este es split", ' '); 
	return(0);
}
