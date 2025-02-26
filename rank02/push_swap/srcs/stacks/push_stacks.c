/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:50:17 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/26 18:10:05 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void free_stack(t_stack *stack)
{
    t_node *temp;
    t_node *current = stack->top;

    while (current)
    {
        temp = current;
        current = current->prev;
        free(temp);
    }
    free(stack);
}

static void insert_node(t_stack *stack, t_node *node)
{
    if (!stack)
        return;
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

t_stack	*stack_generate(int *nbr_arr, int size)
{
	int		i;
	t_stack	*stack;
	t_node	*node;

	i = size;
	stack = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!stack)
		return (NULL);
	while (i--)
	{
		node = (t_node *)malloc(sizeof(t_node));
		if (!node)
		{
			free_stack(stack);
			return (NULL);
		}
		node->value = nbr_arr[i];
		node->id  = get_index(nbr_arr[i], size, sort_arr(size, nbr_arr));
		node->next = NULL;
		node->prev = NULL;
		insert_node(stack, node);

	}
	return (stack);
}