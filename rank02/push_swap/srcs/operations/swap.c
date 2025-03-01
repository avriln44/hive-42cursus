/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:50:10 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/01 14:12:53 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || !stack->top || !stack->top->prev)
		return (0);
	first = stack->top;
	second = first->prev;
	first->prev = second->prev;
	if (second->prev)
		second->prev->next = first;
	second->next = first->next;
	if (first->next)
		first->next->prev = second;
	first->next = second;
	second->prev = first;
	stack->top = second;
	return (1);
}

void	sa(t_push_swap *ps)
{
	if (swap(ps->stack_a))
		ft_printf("sa\n");
}

void	sb(t_push_swap *ps)
{
	if (swap(ps->stack_b))
		ft_printf("sb\n");
}
