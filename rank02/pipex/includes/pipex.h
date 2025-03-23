/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 12:39:22 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/23 15:21:53 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/wait.h>
# include "libft.h"
# include "ft_printf.h"

int		open_file(char *file);
char	*get_valid_cmd(char *cmd, char **envp);
void	pipex_execute(char **envp, char *cmd);
void	first_cmd(char **argv, char **envp, int *fd);
void	second_cmd(char **argv, char **envp, int *fd);
void	execute(char **argv, char **envp, int *fd);
void	pipex_pipe(int *fd);
char	**get_cmd_arr(char **envp);

#endif