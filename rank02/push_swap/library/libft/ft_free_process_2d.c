/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_process_2d.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:06:08 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/01 14:17:00 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_process_2d(char **arr, size_t current)
{
	if (!arr[current])
	{
		while (current-- > 0)
		{
			free(arr[current]);
			return ;
		}
		free(arr);
		arr = NULL;
	}
}
