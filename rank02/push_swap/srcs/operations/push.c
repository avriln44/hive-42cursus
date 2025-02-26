/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:36:32 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/26 18:42:46 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_stack *stack1, t_stack *stack2)
{
	t_node	*first1;
	t_node	*first2;

	if (!stack1 || !stack1->top)
		return ;
	first1 = stack1->top;
	stack1->top = first1->prev;
	stack1->top = first1->prev;
	if (stack1->top)
		stack1->top->next = NULL;
	else
		stack1->bot = NULL;
	if (stack2->size == 0)
	{
		stack2->top = first1;
		stack2->bot = first1;
		first1->prev = NULL;
		first1->next = NULL;
	}
	else
	{
		first2 = stack2->top;
		stack2->top = first1;
		first2->next = first1;
		first1->prev = first2;
		first1->next = NULL;
	}
	stack1->size--;
	stack2->size++;
}
