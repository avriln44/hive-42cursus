/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 12:39:22 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/16 15:36:09 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
#define PIPEX_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include "libft.h"
#include "ft_printf.h"

int		open_file(char *file);
char	*get_valid_cmd(char *cmd, char **envp);
void	redirect(int fd_in, int stdin, int fd_out, int stdout);
void	pipex_execute(char  **envp, char  *cmd);
void	first_cmd(char **argv, char **envp, int *fd);
void	second_cmd(char **argv, char **envp, int *fd);
void	execute(char **argv, char **envp, int *fd);
void	pipex_pipe(int *fd);
char	*get_path(char **envp);
char	**get_cmd_arr(char **envp);
#endif