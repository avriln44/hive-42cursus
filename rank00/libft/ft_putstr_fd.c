/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:21:08 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:26:19 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <unistd.h>

// int main(void)
// {
//     char *s= "te xinh ieu";
//     int fd = 1;
//     ft_putstr_fd(s, fd);
//     write(fd, "\n", 1);
//     return (0);
// }