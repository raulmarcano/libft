/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:07:59 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/15 17:34:13 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cst1;
	unsigned char	*cst2;

	cst1 = (unsigned char *)s1;
	cst2 = (unsigned char *)s2;
	i = 0;
	while (n > i)
	{
		if (cst1[i] != cst2[i])
			return (cst1[i] - cst2[i]);
		i++;
	}
	return (0);
}
