/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:28:59 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/17 18:43:37 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char original[] = "Hola, Mundo!";
    char destino_memcpy[20];
    
//	memcpy(((void *)0), "segfaulter tu dois", 17);

    printf("Resultado de memcpy: %s\n", destino_memcpy);

    char destino_ft_memcpy[20];
    ft_memcpy(((void *)0), "segfaulter tu dois", 17);

    printf("Resultado de ft_memcpy: %s\n", destino_ft_memcpy);
}*/
