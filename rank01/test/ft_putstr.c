/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:42:55 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/24 15:55:03 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_putstr(char *s)
{
	char	*result;

	if (!s)
		return (ft_strdup("(null)"));
	result = ft_strdup(s);
	return (result);
}
