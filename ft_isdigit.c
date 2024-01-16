/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:43:30 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/09 13:12:26 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
/*
#include <stdio.h>
int main (void)
{
	char c;
	int	ft;

	c = '5';
	ft = ft_isdigit(c);

	printf("%d", ft);
}*/
