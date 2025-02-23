/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:23:59 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/23 15:09:14 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	//check_error(argc, argv);
	// int num = arr_length(argc, argv);
	// char **num_list;
	// //num_list = argv;
	// num_list = get_arr(num, argv);
	// ft_printf("length of new arr: %d\n", num);
	// if (!num_list)
	// {
	// 	ft_printf("%s\n", "null");
	// }

	// int i = 0;
	// while (i < num)
	// {
	// 	ft_printf("%s\n", num_list[i]);
	// 	i++;
	// }
	//free(num_list);
	if (argc >= 2)
		ft_printf("%d\n", is_int(argv[1]));

	return (0);
}
