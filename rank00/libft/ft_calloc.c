/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:24:56 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:25:12 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*call;
	size_t			i;

	call = (unsigned char *)malloc(nmemb * size);
	i = 0;
	if (call == NULL)
		return (NULL);
	while (i < nmemb)
	{
		call[i] = '\0';
		i++;
	}
	return (call);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*str1 = ft_calloc(5, sizeof(char));
// 	char	*str2 = calloc(5, sizeof(char));
// 	printf("reproduced function result: %s\n", str1);
// 	printf("built-in function result: %s\n", str2);
// 	return (0);
// }