/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:32:44 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:26:34 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int				i;
	unsigned char	*src;
	unsigned char	*str_dup;

	src = (unsigned char *)s;
	i = 0;
	while (src[i] != '\0')
		i++;
	str_dup = (unsigned char *)malloc((i + 1) * sizeof(char));
	if (str_dup == NULL)
		return (NULL);
	i = 0;
	while (str_dup != NULL && src[i] != '\0')
	{
		str_dup[i] = src[i];
		i++;
	}
	str_dup[i] = '\0';
	return ((char *)str_dup);
}
// #include <stdio.h>
// int main(void)
// {
//     char s[] = "te xinh";
//     char *dup = ft_strdup(s);

//     if (dup != NULL)
//     {
//         printf("%s\n", dup);
//         free(dup);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }