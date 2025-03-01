/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:33:46 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/01 14:02:12 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../library/ft_printf/ft_printf.h"
# include "../library/libft/libft.h"
# include <stdlib.h>
# include <limits.h>

typedef struct s_node
{
	struct s_node	*next;
	struct s_node	*prev;
	int				value;
	int				id;
}	t_node;
typedef struct s_stack
{
	struct s_node	*top;
	struct s_node	*bot;
	int				size;
}	t_stack;
typedef struct s_push_swap
{
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;
	int				steps;
}	t_push_swap;

int	is_duplicate(int size, int *num_list);
int	count_words(const char *s, char delimiter);
int	is_int(char *str);
int	arr_length(int size, char **arr);
int	*numbers_parsing(int size, char ***arr);
int	*sort_arr(int size, int *arr);

t_stack	*stack_generate(int *nbr_arr, int size);

void	check_error(int size, char **arr);

void	pa(t_push_swap *ps);
void	pb(t_push_swap *ps);
void	sa(t_push_swap *ps);
void	sb(t_push_swap *ps);
void	ra(t_push_swap *ps);
void	rb(t_push_swap *ps);
void	rra(t_push_swap *ps);
void	rrb(t_push_swap *ps);

char	***get_arr(int size, char **str);
#endif