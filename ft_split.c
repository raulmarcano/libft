/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:54:32 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/24 14:02:16 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s || start > ft_strlen(s))
	{
		sub = (char *)(malloc(1 * sizeof(char)));
		sub[0] = '\0';
		return (sub);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = (char *)(malloc(sizeof(char) * (len + 1)));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int	words(char *s, char c)
{
	int	count;
	int	i;
	
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (!(s[i] == c) && (s[i + 1] == c || s[i + 1] == '\0'))
				count++;
		i++;
	}
	return (count);
}





void	divide(char **strings, *s, char c, int count)
{
	int	start;
	int	end;
	int	i;
	int	j;
	int	cap;

	cap = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i = 0;
		if (!s[i] == c && cap == 0)
		{
			start = i;
			cap = 1;
		}
		if (!(s[i] == c) && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			end = i;
			cap = 0;
		}
		while (j <= count)
			strings[j++] =  t_substr(s, start, end - start + 1);
		i++;
	}
}





char **ft_split(char const *s, char c);
{
	char **strings;
	int	count;
	
	count = words(s, c);
	strings = (char **)malloc((count + 1)* sizeof(void *));
	if (!strings)
		return (NULL);
	divide(strings, (char *)s, c, count);
	return (strings);
}

int	main()
{
	ft_split("Este es split", ' '); 
	return(0);
}
