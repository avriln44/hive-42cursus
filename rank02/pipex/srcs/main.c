/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:45:25 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/15 16:41:38 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc, char **argv, char **envp)
{
	char *cmd;
	int		i;

	if (argc != 2)
		return (-1);
	i = 0;
    cmd = get_valid_cmd(argv[1], envp);
	pipex_execute(envp, argv[1]);
	if (cmd)
		ft_printf("found!\n");
	else
		ft_printf("error\n");
	free(cmd);
    return 0;
}
