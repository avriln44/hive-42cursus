/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:50:10 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/26 17:29:38 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || !stack->top || !stack->top->prev)
		return ;
	first  =  stack->top;
	second =  first->prev;
	first->prev = second->prev;
	if (second->prev)
		second->prev->next = first;
	second->next  = first->next;
	if (first->next)
		first->next->prev = second;
	first->next = second;
	second->prev = first;
	stack->top  = second;
}

