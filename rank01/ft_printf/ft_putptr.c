/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:28:18 by thi-mngu          #+#    #+#             */
/*   Updated: 2024/12/12 18:39:51 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


char	*ft_putptr(void *ptr, char *base)
{
    char const  *hex_string;
    char const  *start;
	char		*result;

	start = ft_strdup("0x");
    uintptr_t ptr_address = (uintptr_t)ptr;
    hex_string = ft_itoa_base(ptr_address, base);
	result = ft_strjoin(start, hex_string);
    return (result);
}
//#include <stdio.h>
// int main(void) {
//     int  num = 7;
//     char *ptr = "texinh";
//     char *base = "0123456789abcdef";
//     char *result = ft_putptr(&num, base);

//     if (result) {
//         write(1, result, ft_strlen(result));
//         write(1, "\n", 1);
//         free(result);
//     }
//     printf("Expected address of ptr (printf %%p): %p\n", &num);
//     return 0;
// }