/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a2b.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 11:58:55 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/02 16:40:39 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_chunk_number(int size)
{
	if (size <= 10)
		return (2);
	else if (size <= 100)
		return (4);
	return (10);
}

static int	valid(t_chunk chunk_id, t_node *node)
{
	if (chunk_id.left > node->id || node->id > chunk_id.right)
		return (0);
	else if (chunk_id.left <= node->id && node->id <= chunk_id.right)
	{
		if (node->id >= chunk_id.mid)
			return (1);
		else
			return (2);
	}
	return (0);
}
static void print_stack(t_stack *stack)
	{
	t_node *current;

	if (!stack || stack->size == 0)
	{
		ft_printf("Stack is empty\n");
		return;
	}
	current = stack->top;
	ft_printf("Stack contents (top to bottom):\n");
	while (current)
	{
		ft_printf("Value: %d, ID: %d\n", current->value, current->id);
		current = current->prev;
	}
}

static void	pushing(t_ps *ps, t_chunk chunk_id, int size)
{
	t_node	*node;
	int		status;

	while (size--)
	{
		node = ps->stack_a->top;
		status = valid(chunk_id, node);
		if (!status)
			ra(ps);
		else if (status == 1)
		{
			pb(ps);
			if (ps->stack_b->size > 1
				&& ps->stack_b->top->id < ps->stack_b->top->prev->id)
				sb(ps);
		}
		else
		{
			pb(ps);
			if (ps->stack_b->size > 1)
				rb(ps);
			print_stack(ps->stack_b);
		}
	}
}

void	a2b(t_ps *ps, int size)
{
	t_chunk	chunk_id;
	int		chunk_size;
	int		times;

	if (!ps || !ps->stack_a || !ps->stack_b)
		return ;
	chunk_id.left = size / 2;
	chunk_id.right = size / 2;
	chunk_id.mid = size / 2;
	ft_printf("chunk_id.mid: %d\n", chunk_id.mid);
	chunk_size = size / get_chunk_number(size);
	ft_printf("chunk size: %d\n", chunk_size);
	times = get_chunk_number(size) / 2;
	while (times)
	{
		ft_printf("times: %d\n", times);
		chunk_id.left -= chunk_size;
		chunk_id.right += chunk_size;
		if (times == 1)
		{
			chunk_id.left = 0;
			chunk_id.right = size - 4;
		}
		pushing(ps, chunk_id, ps->stack_a->size);
		times--;
	}
	sort3(ps);
}