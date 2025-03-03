/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:23:59 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/03 18:29:43 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void print_stack(t_stack *stack)
// 	{
// 	t_node *current;

// 	if (!stack || stack->size == 0)
// 	{
// 		ft_printf("Stack is empty\n");
// 		return;
// 	}
// 	current = stack->top;
// 	ft_printf("Stack contents (top to bottom):\n");
// 	while (current)
// 	{
// 		ft_printf("Value: %d, ID: %d\n", current->value, current->id);
// 		current = current->prev;
// 	}
// }

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

static int	util(char **argv, int size, int argc)
{
	t_ps	ps;
	char	***arr;
	int		*num_list;
	int		*sorted_list;

	arr = get_arr(argc, argv);
	num_list = numbers_parsing(size, arr);
	if (num_list == NULL)
		return (0);
	sorted_list = sort_arr(size, num_list);
	if (is_duplicate(size, sorted_list))
		return (0);
	else
	{
		ps.stack_a = stack_generate(num_list, size);
		ps.stack_b = stack_generate(NULL, 0);
		// ft_printf("Before push swap:\n");
		// ft_printf("stack a:\n");
		// print_stack(ps.stack_a);
		ops_case(ps);
		// ft_printf("After push swap:\n");
		// print_stack(ps.stack_a);

	}
	return (1);
}
int main(int argc, char **argv)
{
	int		size;

	if (argc < 2)
		return (0);
	size = arr_length(argc, argv);
	if (!util(argv, size, argc))
		ft_printf("Error\n");
	return (0);
}
