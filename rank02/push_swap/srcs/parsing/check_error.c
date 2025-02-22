/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhnhat <minhnhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:17:41 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/22 22:25:13 by minhnhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_error(int size, char **arr)
{
	int i;

	i = 1;
	while (i < size)
	{
		if (!is_int(arr[i]))
		{
			ft_printf("%s\n", "Error");
			break;
		}
		i++;
	}
}
