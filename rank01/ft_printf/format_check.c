/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:19:35 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/12 20:01:35 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
void	format_check(char specifier, void *value)
{
	char	*word;

	word = NULL;
	if (specifier == 'c')
		word = ft_putchar((int)(intptr_t)value);
	if (specifier == 's')
		word = ft_putstr((char *)value);
	else if (specifier == 'i' || specifier == 'd')
		word = ft_itoa_base((int)value, "0123456789");
	else if (specifier == 'x')
		word = ft_itoa_base((int)(intptr_t)value, "0123456789abcdef");
	else if (specifier == 'X')
		word = ft_itoa_base((int)(intptr_t)value, "0123456789ABCDEF");
	else if (specifier == 'p')
		word = ft_putptr(value, "0123456789abcdef");
	else if (specifier == '%')
		word = ft_putchar('%');
	printf("%s\n", word);
}

int main(void)
{
	char *string = "te xinh";
	char c = 'c';
	int num = 255;
	// print string
	format_check('s', string);
	// print character
	format_check('c', (void *)(intptr_t)c);
	// print number in decimal
	format_check('d', (void *)(intptr_t)num);
	// print number in decimal
	format_check('i', (void *)(intptr_t)num);
	// print number in hexa lower
	format_check('x', (void *)(intptr_t)num);
	// print number in HEXA UPPER
	format_check('X', (void *)(intptr_t)num);
	// print pointer
	format_check('p', &num);
	return (0);
}