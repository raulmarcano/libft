/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:51 by rmarcano          #+#    #+#             */
/*   Updated: 2024/02/19 17:27:53 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*arr;
	size_t		i;

	arr = malloc(count * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}

char	*read_n_buffer(char *buf, int fd)
{
	int		size;
	char	*aux;

	size = 1;
	aux = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!aux)
		return (NULL);
	while (!buf || (!ft_strchr(aux, '\n') && size != 0))
	{
		size = read(fd, aux, BUFFER_SIZE);
		if (size < 0)
		{
			free(aux);
			free(buf);
			return (NULL);
		}
		aux[size] = '\0';
		buf = ft_strjoin(buf, aux);
	}
	free (aux);
	return (buf);
}

char	*line_cutter(char **stc)
{
	char	*line;
	char	*aux_freeing;
	int		i;

	i = 0;
	aux_freeing = *stc;
	while (*stc && (*stc)[i] && (*stc)[i] != '\n')
		i++;
	line = ft_substr(*stc, 0, i + 1);
	*stc = ft_substr(*stc, i + 1, ft_strlen((const char *)*stc));
	if (!*stc)
		free(*stc);
	if (!line[0])
	{
		free(line);
	}
	free(aux_freeing);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stc[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE == INT_MAX)
		return (NULL);
	stc[fd] = read_n_buffer(stc[fd], fd);
	if (!stc[fd] || !stc[fd][0])
	{
		free(stc[fd]);
		stc[fd] = NULL;
		return (NULL);
	}
	line = line_cutter(&stc[fd]);
	return (line);
}

/*
int main() {
    int fd[3];
    char *line;
    int i =  0;
	int nlines[3] = {1,  1,  1};
    int finished[3] = {0,  0,  0};

    fd[0] = open("./test.txt", O_RDONLY);
    fd[1] = open("./test2.txt", O_RDONLY);
    fd[2] = open("./test3.txt", O_RDONLY);
    
    if (fd[0] == -1 || fd[1] == -1 || fd[2] == -1) {
        perror("Error opening file");
        return  1;
    }

    while (1)
	{
        int current_fd = fd[i];
        line = get_next_line(current_fd);
        
        if (line == NULL)
		{
            close(current_fd);
            finished[i] =  1; // Marcar el archivo como leído completamente
        } 
		else 
		{
            printf("Line %d from fd %d: %s", nlines[i], current_fd, line);
			nlines[i]++;
            free(line);
        }

        i = (i +  1) % 3;

        // Verificar si todos los archivos han sido leídos completamente
        if (finished[0] && finished[1] && finished[2])
		{
            break;
        }
    }
    //system("leaks -q a.out");
    return 0;
}
*/