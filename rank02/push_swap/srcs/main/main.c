/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:23:59 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/02 16:07:29 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void print_stack(t_stack *stack)
	{
	t_node *current;

	if (!stack || stack->size == 0)
	{
		ft_printf("Stack is empty\n");
		return;
	}
	current = stack->top;
	ft_printf("Stack contents (top to bottom):\n");
	while (current)
	{
		ft_printf("Value: %d, ID: %d\n", current->value, current->id);
		current = current->prev;
	}
}

int main(int argc, char **argv)
{
	int		size;
	char	***arr;
	int		*num_list;
	int		*sorted_arr;
	//t_stack	*stack_a;
	//t_stack *stack_b;
	t_ps ps;

	size = arr_length(argc, argv);
	arr = get_arr(size, argv);
	num_list = numbers_parsing(size, arr);
	sorted_arr = sort_arr(size, num_list);
	ps.stack_a = stack_generate(num_list, size);
	ps.stack_b = stack_generate(NULL, 0);

	ft_printf("Before a2b:\n");
	ft_printf("stack a:\n");
	print_stack(ps.stack_a);
	ft_printf("stack b:\n");
	print_stack(ps.stack_b);

	a2b(&ps, size);

	ft_printf("After a2b:\n");
	ft_printf("stack a:\n");
	print_stack(ps.stack_a);
	ft_printf("stack b:\n");
	// rb(&ps);
	// rb(&ps);
	print_stack(ps.stack_b);

	free(num_list);
	free(sorted_arr);
	return (0);
}

// int main(int argc, char **argv)
// {
// 	int size = arr_length(argc, argv);
// 	int i = 0;
// 	int index;
// 	char ***arr;;
// 	int *num_list;
// 	int *sorted_arr;

// 	arr = get_arr(size, argv);
// 	num_list = numbers_parsing(size, arr);
// 	sorted_arr = sort_arr(size, num_list);
// 	index = get_index(1, size, sorted_arr);
// 	//check_error(argc, argv);
// 	if (!num_list)
// 		ft_printf("%s\n", "null");
// 	while (i < size)
// 	{

// 		ft_printf("%d\n", sorted_arr[i]);
// 		i++;
// 	}
// 	free(num_list);
// 	free(sorted_arr);
// 	return (0);
// }