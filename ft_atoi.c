/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:15:25 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/17 18:17:44 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str);

int main() {
    const char *test_strings[] = {
        "12345",
        "--6789",
        "  42",
        "  +100",
        "  -56abc",
        "  123abc",
        "  456 789",
        "  +999",
        "  -1",
        "  0",
        "  -2147483648",
        "  2147483647",
        "  -2147483649",
        "  2147483648",
        "  9223372036854775807",
        "  -9223372036854775808",
        "  9223372036854775808",
        "  -9223372036854775809",
        NULL
    };

    for (int i = 0; test_strings[i] != NULL; i++) {
        int result_ft = ft_atoi(test_strings[i]);
        int result_std = atoi(test_strings[i]);
        printf("String: \"%s\"\t ft_atoi:%d\t 
atoi: %d\n", test_strings[i], result_ft, result_std);

        if (result_ft != result_std) {
            printf("¡Error! Los resultados difieren para la cadena:
		  
			\"%s\"\n", test_strings[i]);
        }
    }

    return 0;
}*/
