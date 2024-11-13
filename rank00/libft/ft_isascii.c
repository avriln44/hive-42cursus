/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:27:09 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:25:25 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
// #include <unistd.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int c = 'c';
// 	printf("%d", ft_isascii(c));
// 	return (0);
// }