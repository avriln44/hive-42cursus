/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:29:27 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:25:37 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int is_negative(int n)
// {
//     if (n < 0)
//         return (1);
//     return (0);
// }
char	*ft_itoa(int n)
{
	int		len;
	int		negative;
	int		num;
	char	*str;

	len = 0;
	negative = 0;
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		negative = 1;
		n = -n;
		len++;
	}
	num = n;
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	str[len] = '\0';
	len = len -1;
	while (n > 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
// #include <stdio.h>
// #include <stdlib.h>

// int  main(void)
// {
// 	char *str = ft_itoa(0);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }