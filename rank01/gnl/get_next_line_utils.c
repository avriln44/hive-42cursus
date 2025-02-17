/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:09:36 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/01/19 16:36:26 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str_dup;

	i = 0;
	if (!src)
		return (NULL);
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

void	*ft_memcpy(void *dest, const char *src, size_t len)
{
	size_t	i;
	char	*destination;
	char	*source;

	i = 0;
	destination = (char *)dest;
	source = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest != src)
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		len;
	char	*joined;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc((len + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	ft_memcpy(joined, s1, ft_strlen(s1));
	ft_memcpy((joined + ft_strlen(s1)), s2, ft_strlen(s2));
	joined[len] = '\0';
	free(s1);
	return (joined);
}
