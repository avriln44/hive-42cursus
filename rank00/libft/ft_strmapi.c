/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:44:04 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:27:03 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	str_len;
	char			*str;

	str = (char *)malloc((str_len + 1) * sizeof(char));
	str_len = ft_strlen((char *)s);
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdio.h>
// char even_to_uppercase(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         return (c - 32);
//     return (c);
// }
// int main(void)
// {
//     char str[] = "hello";
//     char *newstr = ft_strmapi(str, even_to_uppercase);
//     printf("%s\n", newstr);
//     free(newstr);
//     return (0);
// }