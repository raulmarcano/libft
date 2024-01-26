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

void	ft_free(char **str, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

size_t	words(const char *s, char c)
{
	size_t	count;
	size_t	i;

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

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	count;
	size_t	i;
	size_t	j;

	count = 0;
	i = 0;
	j = 0;
	str = (char **)malloc((words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s[i] != '\0' && count < words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		str[count++] = ft_substr(s, j, (i - j));
	}
	if (!str)
		ft_free(str, words(s, c));
	return (str);
}

// #include <stdio.h>
// int main()
// {
//     char const *input_string = "      split       this for   me  !       ";
//     char **result = ft_split(input_string, ' ');

//     if (result)
//     {
//         size_t i = 0;
//         while (result[i] != NULL)
//         {
//             printf("Word %d:%s\n", i + 1, result[i]);
//             i++;
//         }

//         // Limpieza de la memoria
//         ft_free(result, words(input_string, ' '));
//     }

//     return 0;
// }
