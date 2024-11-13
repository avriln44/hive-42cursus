/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:16:28 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/11/13 17:26:05 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <unistd.h>

// int main(void)
// {
//     char c = 'a';
//     ft_putchar_fd(c, 2); //c to be output to standard output
//     write(1, "\n", 1);
//     // ft_putchar_fd(c, 2); // c to be output to standard error
//     return (0);
// }