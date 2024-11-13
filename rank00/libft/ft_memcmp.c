/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:33:34 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:25:45 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] - str2[i] != 0)
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char s1[20] = "te a";
// 	char s2[20] = "te yeu";
// 	printf("%d\n", memcmp(s1, s2, 4));

// 	printf("%d\n", ft_memcmp(s1, s2, 4));
// 	return (0);
// }