/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:45:25 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/17 16:31:26 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc, char **argv, char **envp)
{
	int		fd[2];

	if (argc != 5)
		return (-1);
	//first_cmd(argv, envp, fd);
	execute(argv, envp, fd);
    return 0;
}
