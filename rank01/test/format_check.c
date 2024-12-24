/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:19:35 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/24 19:24:40 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*format_check(char specifier, va_list ap)
{
	char	*word;

	word = NULL;
	if (specifier == 'c')
		word = ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		word = ft_putstr(va_arg(ap, char *));
	else if (specifier == 'i' || specifier == 'd')
		word = ft_itoa_base(va_arg(ap, int), "0123456789");
	else if (specifier == 'u')
		word = ft_itoa_base((unsigned int)va_arg(ap, int), "0123456789");
	else if (specifier == 'x')
		word = ft_itoa_base(va_arg(ap,unsigned), "0123456789abcdef");
	else if (specifier == 'X')
		word = ft_itoa_base(va_arg(ap,unsigned), "0123456789ABCDEF");
	else if (specifier == 'p')
		word = ft_putptr((uintptr_t)va_arg(ap, void *), "0123456789abcdef");
	else if (specifier == '%')
		word = ft_putchar((int)'%');
	else
		word = ft_putchar((int)specifier);
	return (word);
}
