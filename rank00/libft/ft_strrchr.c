/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:29:41 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 18:11:16 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
// #include <stdio.h>

// int main(void)
// {
//     char *s = "te xienh";
//     // there is an occurence found
//     printf("Found the last occurence: %s\n", ft_strrchr(s, 'e'));
//     // null terminator case
//     printf("null terminator case: %s\n", ft_strrchr(s, '\0'));
//     // there is no occurrence found
//     printf("There is no character found: %s\n", ft_strrchr(s, 'S'));
//     return (0);
// }