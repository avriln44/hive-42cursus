/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:27:25 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/15 16:46:10 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	pipex_execute(char  **envp, char  *cmd)
{
	char	*cmd_path;
	char	**args;

	args = ft_split(cmd, ' ');
	cmd_path = get_valid_cmd(cmd, envp);
	execve(cmd_path, args, NULL);
}