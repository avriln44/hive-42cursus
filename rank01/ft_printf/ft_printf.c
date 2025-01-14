/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:21:40 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/26 12:06:08 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	int		final_count;
	va_list	ap;

	va_start(ap, s);
	i = 0;
	count = 0;
	final_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			count = format_check(s[++i], ap);
		}
		else
			count = ft_putchar(s[i]);
		final_count += count;
		i++;
	}
	va_end(ap);
	return (final_count);
}
