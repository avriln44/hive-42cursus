/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:15:19 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:26:01 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			i;
	unsigned char	*newptr;

	newptr = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		newptr[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}
// #include <stdio.h>

// int main(void)
// {
//     char str[20] = "Hello, World!"; // Mutable array
//     printf("Before memset: %s\n", str);

//     // Set the first 5 characters to 'X'
//     ft_memset(str, 'X', 5);
//     printf("After memset: %s\n", str); // Output: "XXXXX, World!"

//     return 0;
// }