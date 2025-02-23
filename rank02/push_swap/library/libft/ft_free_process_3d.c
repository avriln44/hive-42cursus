/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_process_3d.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:16:24 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/23 12:31:44 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_free_process_3d(char ***arr, size_t current)
{
	if (!(*arr)[current])
		return;
	while (current-- > 0)
	{
		free((*arr)[current]);
		(*arr[current]) = NULL;
	}
	free(*arr);
	(*arr) = NULL;
}