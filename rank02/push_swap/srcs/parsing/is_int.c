/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:24:25 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/09 12:54:39 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_int(char *str)
{
	long	i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
		if (!str[i])
			return (0);
	}
	while (('0' <= str[i] && str[i] <= '9') || str[i] == ' ' || str[i] == '\t')
	{
		if (result * sign < (long)INT_MIN || result * sign > (long)INT_MAX)
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[i])
		return (0);
	return (1);
}
