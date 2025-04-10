/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:15:11 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/22 14:29:26 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*str_dup;

	i = 0;
	while (src[i] != '\0')
		i++;
	str_dup = (char *)malloc((i + 1) * sizeof(char));
	if (str_dup == NULL)
		return (NULL);
	i = 0;
	while (str_dup != NULL && src[i] != '\0')
	{
		str_dup[i] = src[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
