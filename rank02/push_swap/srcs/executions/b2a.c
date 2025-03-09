/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b2a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:43:29 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/09 14:27:30 by thi-mngu         ###   ########.fr       */
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

// static int	find_pos(t_stack *stack, int target, int size)
// {
// 	int		position;
// 	t_node	*node;

// 	node = stack->top;
// 	position = 0;
// 	while (position < size && node)
// 	{
// 		if (node->id == target)
// 			return (position);
// 		position++;
// 		node = node->prev;
// 	}
// 	return (-1);
// }

// static int	sort_a(t_ps *ps, int *ra_steps, int *rra_steps, int *target)
// {
// 	if (ps->stack_a->size == 0)
// 		return (0);
// 	if (ps->stack_a->bot->id == *target)
// 	{
// 		rra(ps);
// 		(*rra_steps)--;
// 		(*target)--;
// 		return (1);
// 	}
// 	else if (find_pos(ps->stack_a, *target, *ra_steps) != -1)
// 	{
// 		(*ra_steps)--;
// 		(*target)--;
// 		return (1);
// 	}
// 	return (0);
// }

// static int	push_target(t_ps *ps, int *ra_steps,
// 				int *rra_steps, int *target)
// {
// 	if (!ps->stack_b->size || *target != ps->stack_b->top->id)
// 		return (0);
// 	while (*ra_steps > 1)
// 	{
// 		ra(ps);
// 		(*ra_steps)--;
// 		(*rra_steps)++;
// 	}
// 	pa(ps);
// 	if (*ra_steps == 1)
// 		sa(ps);
// 	(*target)--;
// 	return (1);
// }

// static int	pushing(t_ps *ps, int *ra_steps, int *rra_steps)
// {
// 	if (!ps->stack_b->size)
// 		return (0);
// 	if ((*rra_steps == 0 || ps->stack_b->top->id > ps->stack_a->bot->id))
// 	{
// 		while (*ra_steps && ps->stack_b->top->id > ps->stack_a->top->id)
// 		{
// 			ra(ps);
// 			(*ra_steps)--;
// 			(*rra_steps)++;
// 		}
// 		pa(ps);
// 		(*ra_steps)++;
// 		return (1);
// 	}
// 	return (0);
// }

// void	b2a(t_ps *ps)
// {
// 	int	ra_steps;
// 	int	rra_steps;
// 	int	target;
// 	int	median;

// 	ra_steps = 0;
// 	rra_steps = 0;
// 	target = ps->stack_b->size - 1;
// 	while (ps->stack_b->size || ra_steps > 0 || rra_steps > 0)
// 	{
// 		median = ps->stack_b->size / 2;
// 		if (sort_a(ps, &ra_steps, &rra_steps, &target))
// 			continue ;
// 		else if (push_target(ps, &ra_steps, &rra_steps, &target))
// 			continue ;
// 		else if (pushing(ps, &ra_steps, &rra_steps))
// 			continue ;
// 		else if (find_pos(ps->stack_b, target, ps->stack_b->size) > median)
// 			rrb(ps);
// 		else if (find_pos(ps->stack_b, target, ps->stack_b->size) > -1)
// 			rb(ps);
// 	}
// }
