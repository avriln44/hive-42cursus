/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:07:52 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/05 15:39:37 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	***get_arr(int size, char **argv)
{
	int		i;
	int		j;
	char	***new_arr;

	i = 0;
	j = 1;
	new_arr = (char ***)malloc((size) * sizeof(char **));
	if (!new_arr)
		return (NULL);
	while (i <= size - 1 && j < size)
	{
		new_arr[i] = ft_split(argv[j], ' ');
		if (!new_arr[i])
		{
			ft_free_process_3d(new_arr, i);
			return (NULL);
		}
		i++;
		j++;
	}
	new_arr[size - 1] = NULL;
	return (new_arr);
}
