/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:21:40 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/21 16:23:20 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int ft_printf(const char *s, ...)
{
    va_list ap;
    int     i;
	char	*word;
    char    buffer[1024];

    va_start(ap, s);
	buffer[0] = '\0';
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '%' && s[i + 1] != '\0')
        {
			word = format_check(s[i + 1], va_arg(ap, void *));
			ft_strlcat(buffer, word, sizeof(buffer));
			free(word);
			i += 2;
        }
        else
        {
            word = ft_putchar(s[i]);
			ft_strlcat(buffer, word, sizeof(buffer));
            i++;
        }
    }
    va_end(ap);
	write(1, buffer, ft_strlen(buffer));
    return (ft_strlen(buffer));
}
#include <stdio.h>
int main()
{
    char *string = "te xinh";
	char c = 'c';
	int num = 255;
    printf("\n%d\n", printf("%s\n%c\n%p\n%c\n%d ee%%", string, c, &num, num, num));
    write(1, "\n", 1);
    printf("\n%d\n", ft_printf("%s\n%c\n%p\n%c\n%d ee%%", string, c, &num, num, num));
    write(1, "\n", 1);
    return (0);
}