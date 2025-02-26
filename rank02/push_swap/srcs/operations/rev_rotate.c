/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:33:23 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/26 20:16:45 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "push_swap.h"

void rev_rotate(t_stack *stack)
{
	t_node	*last;

	if (!stack || (!stack->top && !stack->bot))
		return ;
	last = stack->bot;

	stack->top->next = last;
	last->prev = stack->top;
	last->next = NULL;

	stack->bot = stack->bot->next;
	stack->bot->prev = NULL;
}
