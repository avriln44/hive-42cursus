/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:41:53 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/24 17:22:28 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	is_negative(long long n, char *base)
{
	if (n < 0 && ft_strlen(base) == 10)
		return (1);
	return (0);
}

static	int	num_len(long long n, char *base)
{
	int		len;

	len = 0;
	if (n == 0)
		return (1);
	if (is_negative(n, base))
		n = -n;
	while (n > 0)
	{
		n = n / ft_strlen(base);
		len++;
	}
	return (len);
}

char	*ft_itoa_base(long long n, char *base)
{
	int			len;
	long long	num;
	char		*result;

	len = num_len(n, base);
	num = n;
	if (num == 0)
		return (ft_strdup("0"));
	if (is_negative(num, base) == 1)
	{
		num = -num;
		len++;
	}
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (ft_strdup("(null)"));
	result[len--] = '\0';
	while (num > 0)
	{
		result[len--] = base[num % ft_strlen(base)];
		num = num / ft_strlen(base);
	}
	if (is_negative(n, base))
		result[0] = '-';
	return (result);
}
