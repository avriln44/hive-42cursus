/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:09:36 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/01/12 17:41:08 by thi-mngu         ###   ########.fr       */
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

int	ft_strchr(char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

// char	*ft_strdup(char *src)
// {
// 	int		i;
// 	char	*str_dup;

// 	i = 0;
// 	if (!src)
// 		return (NULL);
// 	while (src[i] != '\0')
// 		i++;
// 	str_dup = (char *)malloc((i + 1) * sizeof(char));
// 	if (str_dup == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (str_dup != NULL && src[i] != '\0')
// 	{
// 		str_dup[i] = src[i];
// 		i++;
// 	}
// 	str_dup[i] = '\0';
// 	return (str_dup);
// }

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	int		i;
// 	int		len;
// 	char	*joined;

// 	if (!s1)
// 	{
// 		s1 = ft_strdup("");
// 		if (!s1)
// 			return (NULL);
// 	}
// 	len = ft_strlen(s1) + ft_strlen(s2);
// 	i = 0;
// 	joined = (char *)malloc((len + 1) * sizeof(char));
// 	// if (joined == NULL)
// 	// 	return (ft_free(&s1));
// 	if (joined == NULL)
// 	{
// 		ft_free(&s1);
// 		return (NULL);
// 	}
// 	while (s1[i] != '\0')
// 	{
// 		joined[i] = s1[i];
// 		i++;
// 	}
// 	while (*s2 != '\0')
// 		joined[i++] = *s2++;
// 	joined[i] = '\0';
// 	ft_free(&s1);
// 	return (joined);
// }
char	*ft_strcpy(char *destination, char *source)
{
	char	*destination_copy;

	destination_copy = destination;
	while (*source)
	{
		*destination_copy = *source;
		destination_copy++;
		source++;
	}
	*destination_copy = '\0';
	return (destination);
}

// char	*ft_strdup(char *source)
// {
// 	size_t	length_source;
// 	char	*duplicate;

// 	// duplicate = NULL;
// 	// length_source = 0x0;
// 	length_source = ft_strlen(source);
// 	duplicate = (char *)malloc(sizeof(char) * (length_source + 0x1));
// 	if (duplicate == NULL)
// 		return (NULL);
// 	ft_strcpy(duplicate, source);
// 	return (duplicate);
// }
char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined_strings;
	size_t	length_string_1;
	size_t	length_string_2;

	if (!s1 || !s2)
	{
		free(s1);
		return (NULL);
	}
	length_string_1 = ft_strlen(s1);
	length_string_2 = ft_strlen(s2);
	joined_strings = (char *)malloc(sizeof(char) * \
		((length_string_1 + length_string_2) + 0x1));
	if (!joined_strings)
	{
		free(s1);
		return (NULL);
	}
	ft_strcpy(joined_strings, s1);
	ft_strcpy(joined_strings + length_string_1, s2);
	free(s1);
	return (joined_strings);
}

char	*ft_substr(char *s, int start, int end)
{
	char	*substr;
	int		i;
	int		str_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		str_len = 0;
	else
		str_len = end - start;
	substr = malloc(str_len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (start < end)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
