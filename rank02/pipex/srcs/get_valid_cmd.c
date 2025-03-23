/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_valid_cmd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:02:15 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/23 15:21:01 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	**check_cmd(char *cmd)
{
	char	**check;

	if (!cmd)
		return (NULL);
	check = ft_split(cmd, ' ');
	if (!check)
		return (NULL);
	return (check);
}

static char	*get_temp_cmd(char *cmd)
{
	char	*temp_cmd;

	if (!cmd)
		return (NULL);
	temp_cmd = ft_strjoin(cmd, "/");
	if (!temp_cmd)
		return (NULL);
	return (temp_cmd);
}

static char	*build_valid_cmd(char *path, char *cmd_part)
{
	char	*temp;
	char	*valid_cmd;

	temp = get_temp_cmd(path);
	if (!temp)
		return (NULL);
	valid_cmd = ft_strjoin(temp, cmd_part);
	free(temp);
	if (!valid_cmd)
	{
		free(temp);
		exit(127);
	}
	if (access(valid_cmd, X_OK) == 0)
		return (valid_cmd);
	free(valid_cmd);
	return (NULL);
}

static void	free_resources(char **cmd_arr, char **check)
{
	ft_free_arr_2d(cmd_arr);
	ft_free_arr_2d(check);
}

char	*get_valid_cmd(char *cmd, char **envp)
{
	int		i;
	char	**cmd_arr;
	char	**check;
	char	*valid_cmd;

	if (!cmd || !envp || !*envp)
		return (NULL);
	cmd_arr = get_cmd_arr(envp);
	check = check_cmd(cmd);
	if (!cmd_arr || !*cmd_arr || !check || !*check)
	{
		free_resources(cmd_arr, check);
		return (NULL);
	}
	i = 0;
	while (cmd_arr[i])
	{
		valid_cmd = build_valid_cmd(cmd_arr[i], check[0]);
		if (valid_cmd)
			return (valid_cmd);
		i++;
	}
	free_resources(cmd_arr, check);
	return (NULL);
}
