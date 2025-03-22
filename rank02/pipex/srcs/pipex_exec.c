/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_exec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 12:49:49 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/22 17:41:28 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	first_cmd(char **argv, char **envp, int *fd)
{
	int		fd_in;

	fd_in = open(argv[1], O_RDONLY);
	if (fd_in == -1 || !open_file(argv[1]))
	{
		perror("Error opening file\n");
		exit(1);
	}
	dup2(fd_in, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	close(fd_in);
	pipex_execute(envp, argv[2]);
	exit(0);
}

void	second_cmd(char **argv, char **envp, int *fd)
{
	int	fd_out;

	fd_out = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_out == -1 || !open_file(argv[4]))
		exit(1);
	dup2(fd[0], STDIN_FILENO);
	dup2(fd_out, STDOUT_FILENO);
	close(fd[0]);
	close(fd_out);
	pipex_execute(envp, argv[3]);
	perror("execve failed");
	exit(0);
}

void	execute(char **argv, char **envp, int *fd)
{
	pid_t	pid;

	pipex_pipe(fd);
	pid = fork();
	if (pid == -1)
	{
		perror("Error fork\n");
		exit(1);
	}
	if (pid == 0)
		first_cmd(argv, envp, fd);
	close(fd[1]);
	wait(NULL);
	second_cmd(argv, envp, fd);
	close(fd[0]);
}