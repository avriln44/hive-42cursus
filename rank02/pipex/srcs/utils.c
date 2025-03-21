/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 12:39:08 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/22 17:03:26 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	redirect(int fd_in, int stdin, int fd_out, int stdout)
{
	if (dup2(fd_in, stdin) == -1)
	{
		perror("Error redirecting stdin to infile\n");
		exit(1);
	}
	if (dup2(fd_out, stdout)  == -1)
	{
		perror("Error redirecting stdout to outfile\n");
		exit(1);
	}
	close(fd_in);
	close(fd_out);
}

void	pipex_pipe(int *fd)
{
	if (pipe(fd) == -1)
	{
		perror("Pipe error\n");
		exit(1);
	}
}

void	pipex_execute(char  **envp, char  *cmd)
{
	char	*cmd_path;
	char	**args;

	if (!cmd || !envp || !*envp)
		return ;
	args = ft_split(cmd, ' ');
	if (!args)
		return ;
	cmd_path = get_valid_cmd(cmd, envp);
	if (!cmd_path)
	{
		ft_free_arr_2d(args);
		return ;
	}
	execve(cmd_path, args, NULL);
	if (execve(cmd_path, args, NULL) == -1)
	{
		free(cmd_path);
		ft_free_arr_2d(args);
		perror("execve failed");
		exit(127);
	}
	free(cmd_path);
	ft_free_arr_2d(args);
}
