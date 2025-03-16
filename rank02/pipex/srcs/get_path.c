/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:02:15 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/16 16:23:42 by thi-mngu         ###   ########.fr       */
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
	int		word;
	char	**cmd_arr;
	char	*path;

	path = get_path(envp);
	if (!path)
		return (NULL);
	word = count_words((char *)path, ':');
	cmd_arr = (char **)malloc((word) * sizeof(char *));
	if (!cmd_arr)
		return (NULL);
	cmd_arr = ft_split((char *)path, ':');
	if (!cmd_arr)
	{
		ft_free_arr_2d(cmd_arr);
		return (NULL);
	}
	cmd_arr[word] = NULL;
	return (cmd_arr);
}

char	*get_valid_cmd(char *cmd, char **envp)
{
	int		i;
	char	**cmd_arr;
	char	*valid_cmd;
	char 	**check;

	if (!cmd)
			return (NULL);
	cmd_arr = get_cmd_arr(envp);
	check = ft_split(cmd, ' ');
	if (!cmd_arr)
	{
		ft_free_arr_2d(cmd_arr);
		return (NULL);
	}
	if (!check)
	{
		ft_free_arr_2d(check);
		return (NULL);
	}
	i =  0;
	while (cmd_arr[i])
	{
		valid_cmd = (char *)malloc((ft_strlen(cmd_arr[i]) + ft_strlen(check[0])) + 2 * sizeof(char));
		if (!valid_cmd)
			return (NULL);
		valid_cmd = ft_strjoin(cmd_arr[i], "/");
		if (!valid_cmd)
		{
			free(cmd_arr[i]);
			return (NULL);
		}
		valid_cmd = ft_strjoin(valid_cmd, check[0]);
		if (!valid_cmd)
		{
			free(cmd_arr[i]);
			return (NULL);
		}
		if (access(valid_cmd, X_OK) == 0)
			return (valid_cmd);
		free(valid_cmd);
		i++;
	}
	return (NULL);
}
