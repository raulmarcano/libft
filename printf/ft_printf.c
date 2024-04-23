/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:29:36 by rmarcano          #+#    #+#             */
/*   Updated: 2024/02/21 12:29:38 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_writter(va_list args, int len, char format)
{
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_putunsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		len += ft_puthex(va_arg(args, int), "0123456789abcdef");
	else if (format == 'X')
		len += ft_puthex(va_arg(args, int), "0123456789ABCDEF");
	else if (format == '%')
		len += ft_putchar('%');
	else if (format == 'p')
	{
		write(1, "0x", 2);
		len += (ft_putpoint(va_arg(args, char *))) + 2;
	}
	return (len);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			len = ft_writter(args, len, format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (0);
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}

/*
int main() 
{
	int len = 0;
	int len2 = 0;
    char c = 'A';
    char *s = "Hello, World!";
    int d = 42;
    unsigned int u = 123;
    int x = 255;
	double f = 3.14159;
    len = ft_printf("Character: %c\n", c);
	len2 = printf("Character: %c\n", c);
	printf("%d %d", len, len2);

	len = ft_printf("String: %s\n", s);
	len2 = printf("String: %s\n", s);
	printf("%d %d", len, len2);

    len = ft_printf("Integer: %d\n", d);
	len2 = printf("Integer: %d\n", d);
	printf("%d %d", len, len2);

    len = ft_printf("Unsigned Integer: %u\n", u);
	len2 = printf("Unsigned Integer: %u\n", u);
	printf("%d %d", len, len2);

	len = ft_printf("Unsigned Integer(negative): %u\n", -110);
	len2 = printf("Unsigned Integer(negative): %u\n", -110);
	printf("%d %d", len, len2);

    len = ft_printf("Hexadecimal (lowercase): %x\n", x);
	len2 = printf("Hexadecimal (lowercase): %x\n", x);
	printf("%d %d", len, len2);

    len = ft_printf("Hexadecimal (uppercase): %X\n", x);
	len2 = printf("Hexadecimal (uppercase): %X\n", x);
	printf("%d %d", len, len2);


    len = ft_printf("Percentage: %%\n");
	len2 = printf("Percentage: %%\n");
	printf("%d %d", len, len2);


    len = ft_printf("Pointer: %p\n", &d);
	len2 = printf("Pointer: %p\n", &d);
	printf("%d %d", len, len2);

	len = printf("");
	len2 = ft_printf("");
	printf("%d %d", len, len2);

	len = printf("Multiple variables:\n\n
	Entero:%d\n String:%s\n Char:%c\n\n", d, s, c);
    len2 = ft_printf("Multiple variables:\n\n 
	Entero:%d\n String:%s\n Char:%c\n\n", d, s, c);
    printf("%d %d\n", len, len2);
    return (0);
}
*/
