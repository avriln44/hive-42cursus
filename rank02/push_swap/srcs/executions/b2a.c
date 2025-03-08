/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b2a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:43:29 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/08 14:45:52 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_pos(t_stack *stack, int target)
{
	int		position;
	t_node	*node;

	node = stack->top;
	position = 0;
	while (node)
	{
		if (node->id == target)
			return (position);
		position++;
		node = node->prev;
	}
	return (-1);
}

static void	move_max_to_top(t_ps *ps, int max_id)
{
	int	steps;
	int	size;

	steps = find_pos(ps->stack_b, max_id);
	size = ps->stack_b->size;
	if (steps == -1)
		return ;
	if (steps <= size / 2)
		while (steps--)
			rb(ps);
	else
	{
		steps = size - steps;
		while (steps--)
			rrb(ps);
	}
}


void	b2a(t_ps *ps)
{
	int		target;

	if (!ps || !ps->stack_b || ps->stack_b->size == 0)
		return ;
	target = ps->stack_b->size - 1;
	while (ps->stack_b->size)
	{
		move_max_to_top(ps, target);
		pa(ps);
		target--;
	}
}
