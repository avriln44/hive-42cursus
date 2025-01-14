/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:25:00 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/26 11:41:30 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
int main(void)
{
	char *s2 = "te xinh";
	printf("\n%d ", printf(" %d ", -15));
	printf("\n");
	printf("\n%d ", ft_printf(" %d ", -15));
	return 0;
}
