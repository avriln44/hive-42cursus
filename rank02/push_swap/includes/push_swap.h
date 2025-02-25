/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:33:46 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/24 17:27:33 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../library/ft_printf/ft_printf.h"
#include "../library/libft/libft.h"
#include <stdlib.h>
#include <limits.h>

struct s_node {
	int num;
	struct s_node *next;
} t_node;

int is_duplicate(int size, int *num_list);
int count_words(const char *s, char delimiter);
int is_int(char *str);
int arr_length(int size, char **arr);
int	*numbers_parsing(int size, char ***arr);
void check_error(int size, char **arr);
int *sort_arr(int size, int *arr);
char ***get_arr(int size, char **str);

#endif