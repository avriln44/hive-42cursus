/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:22:03 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/09 15:01:35 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	clean_ps(t_ps *ps)
{
	t_node	*node;

	while (ps->stack_a->top)
	{
		node = ps->stack_a->top;
		ps->stack_a->top = ps->stack_a->top->prev;
		free(node);
	}
	free(ps->stack_a);
	while (ps->stack_b->top)
	{
		node = ps->stack_b->top;
		ps->stack_b->top = ps->stack_b->top->prev;
		free(node);
	}
	free(ps->stack_b);
}

static void	ops_case(t_ps ps)
{
	if (ps.stack_a->size == 2
		&& ps.stack_a->top->id > ps.stack_a->top->prev->id)
		sa(&ps);
	else if (ps.stack_a->size == 3)
		sort3(&ps);
	else if (ps.stack_a->size > 3)
	{
		a2b(&ps, ps.stack_a->size);
		b2a(&ps);
	}
	else
		return ;
}

static t_ps	ps_generate(int *num_list, int size)
{
	t_ps	ps;

	ps.stack_a = stack_generate(num_list, size);
	if (!ps.stack_a)
	{
		clean_ps(&ps);
		free(num_list);
	}
	ps.stack_b = stack_generate(NULL, 0);
	return (ps);
}

static void	free_arr(int *num_list, int *sorted_list)
{
	free(num_list);
	free(sorted_list);
}

int	util(char **argv, int size, int argc)
{
	t_ps	ps;
	int		*num_list;
	int		*sorted_list;

	num_list = get_num_list(argv, size, argc);
	if (!num_list)
		return (0);
	sorted_list = sort_arr(size, num_list);
	if (!sorted_list)
	{
		free(num_list);
		return (0);
	}
	if (is_duplicate(size, sorted_list))
	{
		free_arr(num_list, sorted_list);
		return (0);
	}
	ps = ps_generate(num_list, size);
	if (compare(num_list, sorted_list, size))
		ops_case(ps);
	free_arr(num_list, sorted_list);
	clean_ps(&ps);
	return (1);
}
