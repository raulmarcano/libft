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

char *ft_itoa(int n)
{
    if (n < 0)
    {

    }
}
int digits(int num)
{
    int count;
    if(num / 10 > 0)
    {
        count++;
        num = num / 10;
        digits(num);
    }
    return (count);
}

int main()
{
    int i;
    char *a;
}