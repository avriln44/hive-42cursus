/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:17:01 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/03 15:58:00 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate( int size, int *num_list)
{
	int	i;
	int	j;

	i = 0;
	if (!num_list)
		return (0);
	while (i < size - 1)
	{
		j = i + 1;
		if (num_list[i] == num_list[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	is_different(int *num_list, int *arr, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		if (num_list[i] != arr[i])
			return (1);
		i++;
	}
	return (0);
}
