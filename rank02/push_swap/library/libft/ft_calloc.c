/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:24:56 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/23 15:19:55 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*call;
	size_t			total_size;
	size_t			i;

	total_size = nmemb * size;
	if (nmemb != 0 && total_size / nmemb != size)
		return (NULL);
	call = (unsigned char *)malloc(total_size);
	if (call == NULL)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		call[i] = '\0';
		i++;
	}
	return (call);
}
