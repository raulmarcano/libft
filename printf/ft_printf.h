/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:29:47 by rmarcano          #+#    #+#             */
/*   Updated: 2024/02/21 12:29:51 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putunsigned(unsigned int nb);
int	ft_putnbr(int nb);
int	ft_puthex(unsigned int nb, char *base);
int	ft_putpoint(void *point);
int	ft_transform_pointer(unsigned long long p);
int	ft_writter(va_list args, int len, char format);

#endif