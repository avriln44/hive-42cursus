/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:21:40 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/24 19:37:25 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static void	ft_free(char *s)
{
	if (s)
	{
		free(s);
		s = NULL;
	}
}

static char *get_words(const char *s, va_list ap)
{
	int		i;
	char	*word;
	char	*start;
	char	*final_word;

	i = 0;
	start = ft_strdup("");
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			word = format_check(s[i + 1], ap);
			i += 2;
		}
		else
		{
			word = ft_putchar(s[i]);
			i++;
		}
		final_word = ft_strjoin(start, word);
		ft_free(word);
		ft_free(start);
		start = final_word;
	}
	return (start);
}
int	ft_printf(const char *s, ...)
{
	va_list	ap;
	char	*to_print;
	int		total_count;

	total_count = 0;
	va_start(ap, s);
	to_print = get_words(s, ap);
	va_end(ap);
	total_count = write(1, to_print, ft_strlen(to_print));
	free(to_print);
	if (total_count == -1)
		return (-1);
	return (total_count);
}
