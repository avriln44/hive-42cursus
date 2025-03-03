/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:33:46 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/03 18:20:41 by thi-mngu         ###   ########.fr       */
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
typedef struct s_ps
{
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;
	int				steps;
}	t_ps;
typedef struct s_chunk
{
	int	left;
	int	right;
	int	mid;
}	t_chunk;

int	is_duplicate(int size, int *num_list);
int	count_words(const char *s, char delimiter);
int	is_int(char *str);
int	arr_length(int size, char **arr);
int	*numbers_parsing(int size, char ***arr);
int	*sort_arr(int size, int *arr);

t_stack	*stack_generate(int *nbr_arr, int size);

void	check_error(int size, char **arr);

void	pa(t_ps *ps);
void	pb(t_ps *ps);
void	sa(t_ps *ps);
void	sb(t_ps *ps);
void	ra(t_ps *ps);
void	rb(t_ps *ps);
void	rra(t_ps *ps);
void	rrb(t_ps *ps);
void	a2b(t_ps *ps, int size);
void	b2a(t_ps *ps);
void	sort3(t_ps *ps);
char	***get_arr(int size, char **argv);
#endif