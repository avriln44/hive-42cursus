/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:12:11 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/23 15:20:02 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	*get_path(char **envp)
{
	int		i;

	if (!envp || !*envp)
	{
		write(2, "Environment PATH missing!\n", 26);
		exit(1);
	}
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
	{
		write(2, "Environment PATH missing!\n", 26);
		exit(1);
	}
	path = get_path(envp);
	if (!path)
	{
		write(2, "PATH not found\n", 16);
		exit(127);
	}
	cmd_arr = ft_split(path, ':');
	if (!cmd_arr)
		return (NULL);
	return (cmd_arr);
}
