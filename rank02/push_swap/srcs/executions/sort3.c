/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:42:12 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/01 14:02:39 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_push_swap *ps)
{
	int	top;
	int	mid;
	int	bot;

	top = ps->stack_a->top->value;
	mid = ps->stack_a->top->prev->value;
	bot = ps->stack_a->bot->value;
	if (top < mid && top < bot && mid > bot)
	{
		rra(ps);
		sa(ps);
	}
	else if (top > mid && top < bot && mid < bot)
		sa(ps);
	else if (top < mid && top > bot && mid > bot)
		rra(ps);
	else if (top > mid && top > bot && mid < bot)
		ra(ps);
	else if (top > mid && top > bot && mid > bot)
	{
		ra(ps);
		sa(ps);
	}
}
