/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:11:11 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/09 14:02:00 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compare(int *original, int *sorted, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (original[i] != sorted[i])
			return (1);
		i++;
	}
	return (0);
}
