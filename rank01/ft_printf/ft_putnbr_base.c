/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:42:46 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/12 16:17:42 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	int			i;
	long long	num;
	char		*word;

	num = nbr;
	word = (char *)malloc(ft_strlen(ft_itoa_base(num, base))*sizeof(char));
	if (!word)
	{
		return (NULL);
	}
	base_len = ft_strlen(base);
	i = 0;
	if (num < 0)
	{
		word[i] = 0;
		num = -num;
	}
	if (num >= base_len)
		ft_putnbr_base(num / base_len, base);
	while (word[i] != '\0')
	{
		word[i]= base[num % base_len];
		printf("%s", word);
		i++;
	}
	return (word);
}


// int	put_number(int num, int c)
// {
//     if (c == 'i' || c == 'd')
//         ft_putnbr_base(num, "0123456789");
//     else if (c == 'x')
//         ft_putnbr_base(num, "0123456789abcdef");
//     else if (c == 'X')
//         ft_putnbr_base(num, "0123456789ABCDEF");
//     return (ft_strlen(ft_itoa(num)));
// }