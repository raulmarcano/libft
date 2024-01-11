/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:51:39 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/11 19:04:06 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
  size_t i;

  i = 0;
  while (i < len)
  {
    ((char *)dst)[i] = ((const char *)src)[i];
    i++;
  }
  return (dst);
}

int main()
{
  char str1[] = "Buenas tardes";
  char str2[10];
  size_t len = 4;
  ft_memmove(str2, str1, len);
  return (0);
}
