/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:03:29 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/23 14:12:24 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	*free_arr(int *arr)
{
	free(arr);
	return (NULL);
}

int	*numbers_parsing(int size, char ***arr)
{
	int	k;
	int	i;
	int	j;
	int	*nbr_arr;

	k = 0;
	i = 0;
	nbr_arr = (int *)malloc((size) * sizeof(int));
	if (!nbr_arr)
		return (NULL);
	while (k < size && arr[i])
	{
		j = 0;
		while (k < size && arr[i][j])
		{
			if (!is_int(arr[i][j]))
				return (free_arr(nbr_arr));
			nbr_arr[k] = ft_atoi(arr[i][j]);
			j++;
			k++;
		}
		i++;
	}
	return (nbr_arr);
}
