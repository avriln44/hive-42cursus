/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:50:17 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/05 16:47:29 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_stack(t_stack *stack)
{
	t_node	*temp;
	t_node	*current;

	current = stack->top;
	while (current)
	{
		temp = current;
		current = current->prev;
		free(temp);
	}
	free(stack);
}

static void	insert_node(t_stack *stack, t_node *node)
{
	if (!stack)
		return ;
	if (stack->size == 0)
	{
		stack->top = node;
		stack->bot = node;
	}
	else
	{
		stack->top->next = node;
		node->prev = stack->top;
		stack->top = node;
	}
	stack->size++;
}

static int	get_index(int num, int size, int *arr)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (num == arr[i])
			return (i);
		i++;
	}
	return (-1);
}

static void	assign_node(t_node *node, t_stack *stack, int value)
{
	if (!node)
	{
		free_stack(stack);
		stack = NULL;
		return ;
	}
	node->value = value;
	node->next = NULL;
	node->prev = NULL;
}

t_stack	*stack_generate(int *nbr_arr, int size)
{
	int		i;
	t_stack	*stack;
	t_node	*node;
	int		*sorted_arr;

	i = size;
	stack = (t_stack *)ft_calloc(1, sizeof(t_stack));
	sorted_arr = sort_arr(size, nbr_arr);
	if (!stack || !sorted_arr)
		return (NULL);
	while (i--)
	{
		node = (t_node *)malloc(sizeof(t_node));
		assign_node(node, stack, nbr_arr[i]);
		node->id = get_index(nbr_arr[i], size, sorted_arr);
		insert_node(stack, node);
	}
	free(sorted_arr);
	return (stack);
}
