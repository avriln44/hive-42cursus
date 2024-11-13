/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:37:08 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:26:43 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int				i;
	int				j;
	int				len;
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	*joined;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0')
		j++;
	len = i + j;
	i = 0;
	j = 0;
	joined = (unsigned char *)malloc((len + 1) * sizeof(char));
	len = 0;
	if (joined == NULL)
		return (NULL);
	while (str1[i] != '\0')
	{
		joined[len] = str1[i];
		i++;
		len++;
	}
	while (str2[j] != '\0')
	{
		joined[len] = str2[j];
		len++;
		j++;
	}
	joined[len] = '\0';
	return ((char *)joined);
}

// #include <stdio.h>

// int main(void)
// {
//     const char str1[] = "hello ";
//     const char str2[] = "world";
//     char *joined = ft_strjoin(str1, str2);
//     printf("%s\n", joined);
//     return (0);
// }