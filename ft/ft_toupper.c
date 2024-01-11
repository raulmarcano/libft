/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:00:54 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/11 20:09:55 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_toupper(int c)
{
  if (c >= 97 && c <= 122)
    c = c - 32;
  return (c);
}
/*
int main()
{
  ft_toupper('a');
}*/
