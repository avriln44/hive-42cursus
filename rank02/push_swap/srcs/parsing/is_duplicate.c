/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:17:01 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/01 14:10:15 by thi-mngu         ###   ########.fr       */
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
		while (j < size)
		{
			if (num_list[i] == num_list[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
