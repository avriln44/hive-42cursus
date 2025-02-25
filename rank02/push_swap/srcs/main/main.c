/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:23:59 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/24 17:28:39 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_index(int num, int size, int *arr)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (num == arr[i])
			return (i);
		i++;
	}
	return (-1);
}

int main(int argc, char **argv)
{
	int size = arr_length(argc, argv);
	int i = 0;
	int index;
	char ***arr;;
	int *num_list;
	int *sorted_arr;

	arr = get_arr(size, argv);
	num_list = numbers_parsing(size, arr);
	sorted_arr = sort_arr(size, num_list);
	index = get_index(1, size, sorted_arr);
	check_error(argc, argv);
	if (!num_list)
		ft_printf("%s\n", "null");
	while (i < size)
	{

		ft_printf("%d\n", sorted_arr[i]);
		i++;
	}
	free(num_list);
	free(sorted_arr);
	return (0);
}
