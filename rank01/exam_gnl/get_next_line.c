/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:03:10 by gicomlan          #+#    #+#             */
/*   Updated: 2025/01/13 19:21:42 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_line(int fd, char *line, char *buffer)
{
	ssize_t	bytes_read;
	char	*new_line_in_line;

	bytes_read = 0x0;
	new_line_in_line = NULL;
	while (!new_line_in_line)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		line = ft_strjoin(line, buffer);
		new_line_in_line = ft_strchr(line, '\n');
	}
	if (!line || ft_strlen(line) == 0)
	{
		free(line);
		return (NULL);
	}
	return (line);
}

void	ft_update_buffer_and_line(char *buffer, char *new_line_in_line)
{
	if (new_line_in_line)
	{
		ft_strcpy(buffer, new_line_in_line + 0x1);
		*(new_line_in_line + 1) = '\0';
	}
	else
		buffer[0x0] = '\0';
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*new_line_in_line;
	static char	buffer[BUFFER_SIZE + 1];

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	line = ft_strdup(buffer);
	line = ft_read_line(fd, line, buffer);
	if (!line)
		return (NULL);
	new_line_in_line = ft_strchr(line, '\n');
	ft_update_buffer_and_line(buffer, new_line_in_line);
	return (line);
}
