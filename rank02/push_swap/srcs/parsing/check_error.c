/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:17:41 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/22 15:54:34 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_error(int size, char **arr)
{
	int	i;

	i = 1 ;
	while (i < size)
	{
		if (!is_int(arr[i]) || is_duplicate(size, (int *)arr))
		{
			ft_printf("%s\n", "Error");
			break ;
		}
		i++;
	}
}
