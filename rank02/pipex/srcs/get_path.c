/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:02:15 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/17 18:49:54 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*get_path(char **envp)
{
	int		i;

	if (!envp || !*envp)
		return (NULL);
	i = 0;
	while (envp[i])
	{
		if (ft_strnstr(envp[i], "PATH=", 5))
			return (ft_strnstr(envp[i], "PATH=", 5) + 5);
		i++;
	}
	return (NULL);
}

char	**get_cmd_arr(char **envp)
{
	char	**cmd_arr;
	char	*path;

	if (!envp || !*envp)
		return (NULL);
	path = get_path(envp);
	if (!path)
		return (NULL);
	cmd_arr = ft_split(path, ':');
	if (!cmd_arr)
		return (NULL);
	return (cmd_arr);
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

static char **split_cmd(char *cmd)
{
	char	**split;

	if (!cmd)
		return (NULL);
	split = ft_split(cmd, ' ');
	if (!split)
		return (NULL);
	return (split);
}

char	*get_valid_cmd(char *cmd, char **envp)
{
	int		i;
	char	**cmd_arr;
	char	*valid_cmd;
	char	*temp_cmd;
	char 	**check;

	if (!cmd || !envp || !*envp)
		return (NULL);
	cmd_arr = get_cmd_arr(envp);
	check = split_cmd(cmd);
	if (!cmd_arr || !*cmd_arr)
		return (NULL);
	if (!check || !*check)
		return (NULL);
	i = 0;
	while (cmd_arr[i])
	{
		temp_cmd = get_temp_cmd(cmd_arr[i]);
		if (!temp_cmd)
		{
			//ft_free_arr_2d(cmd_arr);
			//ft_free_arr_2d(check);
			return (NULL);
		}
		valid_cmd = ft_strjoin(temp_cmd, check[0]);
		if (!valid_cmd)
		{
			free(temp_cmd);
			// ft_free_arr_2d(cmd_arr);
			// ft_free_arr_2d(check);
			return (NULL);
		}
		if (access(valid_cmd, X_OK) == 0)
			return (valid_cmd);
		free(valid_cmd);
		i++;
	}
	ft_free_arr_2d(cmd_arr);
	ft_free_arr_2d(check);
	return (NULL);
}
