/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:07:52 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/23 13:59:00 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	***get_arr(int argc, char **argv)
{
	int		i;
	int		j;
	char	***new_arr;

	i = 0;
	j = 1;
	if (!argv || !*argv)
		return (NULL);
	new_arr = (char ***)malloc((argc) * sizeof(char **));
	if (!new_arr)
		return (NULL);
	while (i < argc - 1)
	{
		new_arr[i] = ft_split(argv[j], ' ');
		if (!new_arr[i] || !argv[j])
		{
			ft_free_process_3d(new_arr, i);
			return (NULL);
		}
		i++;
		j++;
	}
	new_arr[i] = NULL;
	return (new_arr);
}
