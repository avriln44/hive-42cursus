/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:28:18 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/24 17:53:33 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_putptr(uintptr_t ptr, char *base)
{
	char		*hex_string;
	char 		*start;
	char		*result;
	uintptr_t	ptr_address;

	if (ptr == 0)
		result = ft_strdup("(nil)");
	else
	{
		start = ft_strdup("0x");
		ptr_address = ptr;
		hex_string = ft_itoa_base(ptr_address, base);
		result = ft_strjoin(start, hex_string);
		free(start);
		free(hex_string);
	}
	return (result);
}
