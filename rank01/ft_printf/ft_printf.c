/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:21:40 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/10 21:40:22 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int ft_printf(const char *s, ...)
{
    va_list ap;
    int     i;
    int     count;
    int     num;
    int     final_count;
    void    *str;

    va_start(ap, s);
    count = 0;
    final_count = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '%')
        {
            if (s[i + 1] == 'c')
            {   
                count = ft_putchar(va_arg(ap, int));
                printf("\ncount for char: %d\n", count);
                i += 2;
            }
            else if (s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] == 'x' || s[i + 1] == 'X')
            {
                count = put_number((int)va_arg(ap, int), s[i + 1]);
                printf("\ncount for numbers: %d\n", count);
                i += 2;
            }
            else if (s[i + 1] == 's')
            {
                count = ft_putstr((char *)va_arg(ap, char *));
                printf("\ncount for string: %d\n", count);
                i += 2;
            }
        }
        else
        {
            count = ft_putchar(s[i]);
            i++;
        }
        if (count == -1)
            return (-1);
        else
            final_count += count;
    }
    va_end(ap);
    return (final_count);
}
#include <stdio.h>
int main()
{
    int var = 42;
    int *ptr = &var;
    printf("%d\n", printf("%s\n%c\n%xee", "te xinh", 'c', var));
    write(1, "\n", 1);
    printf("%d\n", ft_printf("%s\n%c\n%xee", "te xinh", 'c', var));
    write(1, "\n", 1);
    return (0);
}