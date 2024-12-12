/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:41:00 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/12 18:54:55 by thi-mngu         ###   ########.fr       */
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
int     ft_strlen(const char *str);
char    *ft_putchar(int c);
char    *ft_putstr(char *s);
char    *ft_putnbr_base(int num, char *base);
char    *ft_putptr(void *ptr, char *base);
char    *ft_itoa_base(unsigned long long n, char *base);
char    *ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
#endif