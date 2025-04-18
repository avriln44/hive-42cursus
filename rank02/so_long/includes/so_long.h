/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:30:12 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/24 17:13:52 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "./library/libft/libft.h"
# include "./library/ft_printf/ft_printf.h"

typedef struct s_map
{
	char	**game_map;
	int		player;
	int		collect;
	int		exit;
	int		space;
	int		width;
	int		length;
}	t_map;

#endif