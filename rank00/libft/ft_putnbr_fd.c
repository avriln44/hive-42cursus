/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:19:09 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:26:15 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	nb;

	num = (long)n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (0 <= num && num <= 9)
	{
		nb = num + '0';
		write(fd, &nb, 1);
		return ;
	}
	ft_putnbr_fd(num / 10, fd);
	nb = num % 10 + '0';
	write(fd, &nb, 1);
}
// #include <unistd.h>

// int main(void)
// {
//     int nb = -2147483647;
//     int fd = 1;
// 	ft_putnbr_fd(nb, fd);
//     write(fd, "\n", 1);
// 	return (0);
// }