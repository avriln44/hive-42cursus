/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:23:59 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/30 14:07:50 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	size;
	int	*num_list;

	if (argc < 2)
		return (0);
	size = arr_length(argc, argv);
	num_list = get_num_list(argv, size, argc);
	if (!util(argv, size, argc) || !num_list || size < 1)
	{
		write(2, "Error\n", 6);
		free(num_list);
		return (1);
	}
	free(num_list);
	return (0);
}
