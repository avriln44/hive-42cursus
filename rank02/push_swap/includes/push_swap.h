/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:33:46 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/26 19:40:16 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../library/ft_printf/ft_printf.h"
#include "../library/libft/libft.h"
#include <stdlib.h>
#include <limits.h>

typedef struct s_node
{
	struct s_node *next;
	struct s_node *prev;
	int value;
	int id;
} t_node;
typedef struct s_stack
{
	struct s_node *top;
	struct s_node *bot;
	int size;
} t_stack;
typedef struct s_push_swap
{
	struct s_stack *stack_a;
	struct s_stack *stack_b;
	int steps;
} t_push_swap;

int is_duplicate(int size, int *num_list);
int count_words(const char *s, char delimiter);
int is_int(char *str);
int arr_length(int size, char **arr);
int *numbers_parsing(int size, char ***arr);
void check_error(int size, char **arr);
int *sort_arr(int size, int *arr);
char ***get_arr(int size, char **str);
t_stack	*stack_generate(int *nbr_arr, int size);
void swap(t_stack *stack);
void push(t_stack *stack1, t_stack *stack2);
void rotate(t_stack *stack);
void rev_rotate(t_stack *stack);
#endif