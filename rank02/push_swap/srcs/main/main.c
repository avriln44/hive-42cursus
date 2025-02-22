/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhnhat <minhnhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:23:59 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/22 23:00:29 by minhnhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	check_error(argc, argv);
	int num = arr_length(argc, argv);
	char **num_list;
	num_list = get_arr(num, argv);
	ft_printf("length of new arr: %d\n", num);
	if (!num_list)
	{
		ft_printf("%s\n", "null");
	}

	int i = 0;
	while (i < num)
	{
		ft_printf("%s\n", num_list[i]);
		i++;
	}
	free(num_list);
	return (0);
}

// int main()
// {
// 	char *arr[] = {"1", "22", "te xinh "};
// 	int num = arr_length(9, arr);
// 	char **num_list;
// 	num_list = get_arr(num, arr);
// 	ft_printf("length of new arr: %d\n", num);
// 	if (!num_list)
// 	{
// 		ft_printf("%s\n", "null");
// 	}

// 	int i = 0;
// 	while (i < num)
// 	{
// 		ft_printf("%s\n", num_list[i]);
// 		i++;
// 	}
// 	free(num_list);
// 	return (0);
// }

// // int main()
// // {
// // 	int num_list[] = {1, 0, 3, 2, 4};
// // 	printf("%d\n", is_duplicate(num_list, 5));
// // 	return (0);
// // }
