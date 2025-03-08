/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:23:59 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/08 15:27:05 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	size;

	if (argc < 2)
		return (0);
	size = arr_length(argc, argv);
	if (!util(argv, size, argc) || size <= 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
