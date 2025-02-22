/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:24:25 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/22 15:45:12 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int is_int(char *str)
{
	long i;
	int sign;
	long result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result * sign < (long)INT_MIN || result * sign > (long)INT_MAX)
			return (0);
		i++;
	}
	if (str[i])
		return (0);
	return (1);
}
// int main()
// {
// 	char *str = "-1443627638";
// 	printf("%d\n", is_int(str));
// 	return (0);
// }