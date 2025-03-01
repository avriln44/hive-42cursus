/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:13:48 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/01 14:13:18 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_nbr(int *num1, int *num2)
{
	int	temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

static int	*duplicate_arr(int size, int *arr)
{
	int	k;
	int	*duplicate;

	k = 0;
	duplicate = (int *)malloc((size + 1) * sizeof(int));
	if (!duplicate)
		return (NULL);
	while (k < size)
	{
		duplicate[k] = arr[k];
		k++;
	}
	return (duplicate);
}

int	*sort_arr(int size, int *arr)
{
	int	i;
	int	j;
	int	*sorted_arr;

	i = 0;
	sorted_arr = duplicate_arr(size, arr);
	if (!sorted_arr)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (sorted_arr[j] >= sorted_arr[j + 1])
			{
				swap_nbr(&sorted_arr[j], &sorted_arr[j + 1]);
			}
			j++;
		}
		i++;
	}
	return (sorted_arr);
}
