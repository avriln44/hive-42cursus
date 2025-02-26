/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:45:58 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/26 19:31:41 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*first;

	if (!stack || (!stack->top && !stack->bot))
		return ;
	first = stack->top;
	stack->top = stack->top->prev;

	stack->bot->prev = first;
	first->next = stack->bot->next;
	first->prev = NULL;
}