/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:24:42 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:25:09 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*newstr;

	newstr = (char *)s;
	i = 0;
	while (i < n)
	{
		newstr[i] = '\0';
		i++;
	}
}

int	main(void)
{
	char	s[30] = "Hello world te xinh";
	int	i;

	ft_bzero(s, 10);
	i = 0;
	while (i < 30)
	{
		if (s[i] == '\0')
		{
			printf("0");
		}
		else
			printf("%c", s[i]);
		i++;
	}
	printf("\n");
	return (0);
}