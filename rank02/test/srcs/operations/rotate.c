/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:45:58 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/02 15:30:36 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate(t_stack *stack)
{
	t_node	*first;

	if (!stack || !stack->top || !stack->top->prev)
		return (0);
	first = stack->top;
	stack->top = first->prev;
	stack->top->next = NULL;
	first->prev = NULL;
	first->next = stack->bot;
	stack->bot->prev = first;
	stack->bot = first;
	return (1);
}

void	ra(t_ps *ps)
{
	if (rotate(ps->stack_a))
		ft_printf("ra\n");
}

void	rb(t_ps *ps)
{
	if (rotate(ps->stack_b))
		ft_printf("rb\n");
}
