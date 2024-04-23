/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:36:52 by rmarcano          #+#    #+#             */
/*   Updated: 2024/02/22 16:36:53 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		count += ft_putchar(nb + '0');
	}
	else
	{
		count += ft_putnbr(nb / 10);
		count += ft_putchar (nb % 10 + '0');
	}
	return (count);
}

int	ft_putunsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb < 10)
	{
		count += ft_putchar(nb + '0');
	}
	else
	{
		count += ft_putunsigned(nb / 10);
		count += ft_putchar (nb % 10 + '0');
	}
	return (count);
}

int	ft_puthex(unsigned int nb, char *base)
{
	int	count;

	count = 0;
	if (nb < 16)
		count += ft_putchar(base[nb]);
	else
	{
		count += ft_puthex(nb / 16, base);
		count += ft_putchar(base[nb % 16]);
	}
	return (count);
}

int	ft_transform_pointer(unsigned long long p)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (p < 16)
		count += ft_putchar(base[p]);
	else
	{
		count += ft_transform_pointer(p / 16);
		count += ft_putchar(base[p % 16]);
	}
	return (count);
}
