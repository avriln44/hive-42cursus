/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:35:46 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:25:48 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*str;
	unsigned char		*result;
	size_t				i;

	str = (const unsigned char *)src;
	result = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		result[i] = str[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char src[] = "Hello, World!";
//     char dest[20];
//     ft_memcpy(dest, src, strlen(src) + 1);
//     printf("%s\n", dest);
//     return (0);
// }