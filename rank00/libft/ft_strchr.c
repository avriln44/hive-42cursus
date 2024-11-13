/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:29:09 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:26:30 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     char *s = "te xinh";
//     // there is an occurence found
//     printf("Found the first occurence: %s\n", ft_strchr(s, 'e'));
//     // null terminator case
//     printf("null terminator case: %s\n", ft_strchr(s, '\0'));
//     // there is no occurrence found
//     printf("There is no character found: %s\n", ft_strchr(s, 'S'));
//     return (0);
// }