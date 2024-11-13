/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:12:16 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:25:57 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*move;

	str = (unsigned char *)src;
	move = (unsigned char *)dest;
	i = 0;
	if (move < str)
	{
		while (i < n)
		{
			move[i] = str[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			move[n - 1] = str[n - 1];
			n--;
		}
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char src[] = "ABCDEFGHI";
// 	char test_src[] = "ABCDEFGHI";
// 	printf("reproduced function result: %p\n",ft_memmove(src + 2, src, 5));
// 	printf("built-in function result: %p\n",memmove(test_src + 2, test_src, 5));
// 	return (0);
// }