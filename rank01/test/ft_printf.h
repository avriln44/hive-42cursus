/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:41:00 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/24 18:18:01 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int     ft_printf(const char *s, ...);
int     ft_strlen(char *str);
char	*format_check(char specifier, va_list ap);
char    *ft_putchar(int c);
char    *ft_putstr(char *s);
char    *ft_putptr(uintptr_t ptr, char *base);
char    *ft_itoa_base(long long n, char *base);
char    *ft_strdup(char *src);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlcat(char *dst, char *src, size_t size);
#endif