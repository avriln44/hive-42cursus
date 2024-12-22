/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:42:24 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/21 16:46:31 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_putchar(int c)
{
	char	*result;
	char	temp[2];

	temp[0] = c;
	temp[1] = '\0';
	result = ft_strdup(temp);
	return (result);
}
