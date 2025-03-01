/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:36:32 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/01 14:35:34 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	push(t_stack *stack1, t_stack *stack2)
{
	t_node	*first1;

	if (!stack1 || !stack1->top)
		return (0);
	first1 = stack1->top;
	stack1->top = first1->prev;
	if (stack1->top)
		stack1->top->next = NULL;
	else
		stack1->bot = NULL;
	first1->next = NULL;
	first1->prev = stack2->top;
	if (stack2->top)
		stack2->top->next = first1;
	else
		stack2->top = first1;
	stack1->size--;
	stack2->size++;
	return (1);
}

void	pa(t_push_swap *ps)
{
	if (push(ps->stack_a, ps->stack_b))
		ft_printf("pa\n");
}

void	pb(t_push_swap *ps)
{
	if (push(ps->stack_b, ps->stack_a))
		ft_printf("pb\n");
}
