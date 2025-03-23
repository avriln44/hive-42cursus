/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:01:52 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/23 14:08:12 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_num_list(char **argv, int size, int argc)
{
	char	***arr;
	int		*num_list;

	arr = get_arr(argc, argv);
	if (!arr || !*arr)
		return (NULL);
	num_list = numbers_parsing(size, arr);
	if (!num_list)
	{
		ft_free_arr_3d(arr);
		return (NULL);
	}
	ft_free_arr_3d(arr);
	return (num_list);
}
