/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:21:40 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/22 16:37:17 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		free(word);
		free(start);
		start = final_word;
	}
	return (start);
}
int	ft_printf(const char *s, ...)
{
	va_list	ap;
	char *to_print;

	va_start(ap, s);
	to_print = get_words(s, ap);
	va_end(ap);
	write(1, to_print, ft_strlen(to_print));
	return (ft_strlen(to_print));
}
#include <stdio.h>
int main(void)
{
	int num = 255;
	char c = 'c';
	char *string = "te xinh yeu";
	ft_printf("\n%d", ft_printf("\nprintf: %d\n%s\n%p\n%c\n%x\n%X\n%i\n", num, string, &num, c, num, num, num));
	printf("\n%d", printf("\nprintf: %d\n%s\n%p\n%c\n%x\n%X\n%i\n", num, string, &num, c, num, num, num));
    return 0;
}