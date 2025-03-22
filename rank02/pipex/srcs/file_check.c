/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:27:25 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/22 17:29:06 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int open_file(char *file)
{

	int	fd;

	if (access(file, R_OK) < 0)
		return (0);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	if (open(file, O_DIRECTORY) != -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}

