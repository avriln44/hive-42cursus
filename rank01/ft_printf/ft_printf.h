/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:41:00 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/12 16:10:20 by thi-mngu         ###   ########.fr       */
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
int     put_number(int num, int c);
int     ft_putstr(char *s);
char    *ft_putchar(char c);
char    *ft_itoa_base(unsigned long long n, char *base);
char    *ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
#endif