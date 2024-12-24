/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:25:00 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/24 19:50:05 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
int main(void)
{
	ft_printf("%d", ft_printf("%c%c%c*", 120, '1', '3'));
	printf("%d", printf("%c%c%c*", 120, '1', '3'));
	//printf("\n %d", printf(" %c %c %c ", '0', 0, '1'));
	return 0;
}
