/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 12:39:08 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/15 13:56:51 by thi-mngu         ###   ########.fr       */
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
	return  (1);
}

void	redirect(int infile, int stdin, int outfile, int stdout)
{
	if (dup2(infile, stdin) == -1)
	{
		perror("Error redirecting stdin to infile\n");
		exit(1);
	}
	if (dup2(outfile, stdout)  == -1)
	{
		perror("Error redirecting stdout to outfile\n");
		exit(1);
	}
	close(infile);
	close(outfile);
}
// void	pipex_pipe(int *fd)
// {
// 	pid_t	pid;

// 	if (pipe(fd) == -1)
// 	{
// 		perror("Pipe error\n");
// 		exit(1);
// 	}
// }
// void	pipex_fork(int *fd)
// {
// 	pid_t	pid;

// 	pipex_pipe(fd);
// 	pid = fork();
// 	if (pid == -1)
// 	{
// 		perror("Error fork\n");
// 		exit(1);
// 	}
// 	if (pid == 0)
// 	{
// 		infile_process();
// 	}
// 	else
// 		outfile_process();

// }

