/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 12:39:22 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/15 16:40:58 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
#define PIPEX_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

int		open_file(char *file);
char	*get_valid_cmd(char *cmd, char **envp);
void	redirect(int infile, int stdin, int outfile, int stdout);
void	pipex_execute(char  **envp, char  *cmd);
void	pipex_pipe(int *fd);
void	pipex_fork(int *fd);
char	*get_path(char **envp);
char	**get_cmd_arr(char **envp);
#endif