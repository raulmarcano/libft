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
#include <limits.h>

int	digits(int num)
{
    int count;
	int	n;
	
	n = num;
	count = 1;
    while (num / 10 != 0)
    {
        num = num / 10;
    	count++;
    }
	if (n < 0)
		count++;
    return (count);
}

char *ft_transform(char *s, long n, size_t count)
{
	int	i;
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
	while (n != 0)
	{
		i = count - 1;
		s[i] =('0' + (n % 10));
		n = n / 10;
		count--;
	}
	return(s);
}

char *ft_itoa(int n)
{
	int count;
	int	num;
	char *s;

	if (n == INT_MIN)
		return(ft_strdup("-2147483648"));
	num = n;
    count = digits(n);
    s = ft_calloc((count + 1), sizeof(char));
	if (!s)
		return(NULL);
	return(ft_transform(s, n, count));
}
/*
int main()
{
    int num = 1000034;
    char *result = ft_itoa(num);

    printf("Número: %d\n", num);
    printf("Resultado: %s\n", result);

    return 0;
}*/
