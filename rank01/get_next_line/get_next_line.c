/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:08:18 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/01/13 20:57:18 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char **buffer)
{
	free(*buffer);
	*buffer = NULL;
	return (NULL);
}

static char	*get_single_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (buffer == NULL)
		return (NULL);
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	line = ft_substr(buffer, 0, i);
	if (!line)
		return (NULL);
	return (line);
}

static char	*remaining_buffer(char *buffer)
{
	char	*new_buffer;
	int		i;

	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	new_buffer = ft_substr(buffer, i, ft_strlen(buffer));
	if (!new_buffer)
		return (ft_free(&buffer));
	ft_free(&buffer);
	return (new_buffer);
}

static char	*get_buffer(char *buffer, int fd)
{
	char	*temp_buffer;
	ssize_t readbytes;

	temp_buffer = malloc(BUFFER_SIZE + 1);
	if (!temp_buffer)
		return (NULL);
	while (!ft_strchr(buffer, '\n'))
	{
		readbytes = read(fd, temp_buffer, BUFFER_SIZE);
		if (readbytes < 0)
		{
			free(temp_buffer);
			return (ft_free(&buffer));
		}
		if (readbytes == 0)
			break;
		temp_buffer[readbytes] = '\0';
		buffer = ft_strjoin(buffer, temp_buffer);
		if (!buffer)
		{
			free(temp_buffer);
			return (NULL);
		}
	}
	free(temp_buffer);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return  (NULL);
	if (!buffer)
		buffer = ft_strdup("");
	buffer = get_buffer(buffer, fd);
	if (!buffer)
		return (NULL);
	line = get_single_line(buffer);
	if (!line)
		ft_free(&buffer);
	buffer = remaining_buffer(buffer);
	if (!buffer || *buffer == '\0')
    	ft_free(&buffer);
	return (line);
}
