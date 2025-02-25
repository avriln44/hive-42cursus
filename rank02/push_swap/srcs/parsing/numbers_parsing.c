/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:03:29 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/24 11:43:57 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *numbers_parsing(int size, char ***arr)
{
	int	k;
	int	i;
	int	j;
	int	*nbr_arr;

	k = 0;
	i = 0;
	nbr_arr = (int *)malloc((size + 1) * sizeof(int));
	if (!nbr_arr)
		return (NULL);
	while (k < size)
	{
		while (arr[i])
		{
			j = 0;
			while (arr[i][j])
			{
				nbr_arr[k] = ft_atoi(arr[i][j]);
				j++;
				k++;
			}
			i++;
		}
		k++;
	}

	return (nbr_arr);
}
