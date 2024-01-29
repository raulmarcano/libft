/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:48:54 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/26 18:50:41 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	digits(int num)
{
    int count;
	int	n;
	
	n = num;
	count = 1;
    if (num < 0)
        num = num * -1;
    while (num / 10 > 0)
    {
        count++;
        num = num / 10;
    }
	if (n < 0)
		count++;
    return (count);
}


char *ft_itoa(int n)
{
	int count;
	int	num;
	char *s;

	num = n;
    count = digits(n);
    s = ft_calloc((count + 1), sizeof(char));
	if (!s)
		return(NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		{
			s[0] = '0';
			s[1] = '\0';
			return (s);
		}
	while (count > 0)
	{
		if (count == 1 && num < 0)
			return(s);
		s[count - 1] =(48 + (n % 10));
		n = n / 10;
		count--;
	}
	return(s);
}
/*
int main()
{
    int num = 8124;
    char *result = ft_itoa(num);

    printf("Número: %d\n", num);
    printf("Resultado: %s\n", result);

    return 0;
}*/
