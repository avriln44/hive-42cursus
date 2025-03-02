/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:33:23 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/02 12:05:55 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "push_swap.h"

static int	rev_rotate(t_stack *stack)
{
	t_node	*last;

	if (!stack || (!stack->top && !stack->bot))
		return (0);
	last = stack->bot;
	stack->bot = last->next;
	if (stack->bot)
		stack->bot->prev = NULL;
	last->prev = stack->top;
	stack->top->next = last;
	last->next = NULL;
	stack->top = last;
	return (1);
}

void	rra(t_ps *ps)
{
	if (rev_rotate(ps->stack_a))
		ft_printf("rra\n");
}

void	rrb(t_ps *ps)
{
	if (rev_rotate(ps->stack_b))
		ft_printf("rrb\n");
}
