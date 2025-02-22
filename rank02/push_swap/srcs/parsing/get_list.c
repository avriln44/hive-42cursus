// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/02/22 13:34:27 by thi-mngu          #+#    #+#             */
// /*   Updated: 2025/02/22 15:17:25 by thi-mngu         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


#include "push_swap.h"

char **get_args_list(int size, char **arr)
{
	int i;

	char **num_list;

	i = 0;
	if (!num_list)
		return (NULL);
	num_list = ft_split(arr, ' ');
	while (i < num)
	{
		if (is_int(arr[i]))
			num_list[i] = ft_atoi(arr[i]);
		else
		{
			free(num_list);
			return (NULL);
		}
		i++;
	}
	if (is_duplicate(num_list, num))
	{
		free(num_list);
		return (NULL);
	}
	return (num_list);
}

