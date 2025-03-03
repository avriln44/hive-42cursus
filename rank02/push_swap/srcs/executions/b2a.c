/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b2a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:43:29 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/03 14:32:24 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b2a(t_ps *ps)
{
	int	id;
	t_node	*node;

	if (!ps || ps->stack_b->size == 0)
		return ;

	while (ps->stack_b->size)
	{
		id = ps->stack_a->top->id;
		node = ps->stack_b->top;
		if (ps->stack_b->size > 1 && (id - 1) != node->id)
			rb(ps);
		else
			pa(ps);
	}
}