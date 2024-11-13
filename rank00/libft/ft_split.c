/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:21:49 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:26:27 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

char	*ft_substr(const char *s, int start, int len)
{
	char	*substr;
	int		i;

	substr = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

void	free_split(char **result, int count)
{
	while (count--)
		free(result[count]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	end = 0;
	if (!s || !(result = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (s[end])
	{
		if (s[end] != c)
		{
			start = end;
			while (s[end] && s[end] != c)
				end++;
			if (!(result[i++] = ft_substr(s, start, end - start)))
				return (free_split(result, i - 1), NULL);
		}
		else
		{
			end++;
		}
	}
	result[i] = NULL;
	return (result);
}

// #include <stdio.h>

// int main(void) {
//     char *s = "0hello000te0xinh0";
//     char c = '0';
//     char **split = ft_split(s, c);
//     int i = 0;

//     if (!split)
//         return 1;
//     while (split[i]) {
//         printf("Substring %d: %s\n", i, split[i]);
//         free(split[i]);
//         i++;
//     }
//     free(split);
//     return 0;
// }