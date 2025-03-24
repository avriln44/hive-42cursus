/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:10:44 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/24 18:15:56 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	map_error(char *msg, t_map *map)
{
	write(2, "Error\n", 7);
	write(2, msg, ft_strlen(msg));
}

static void	check_rectangle(t_map *map)
{
	int		i;
	int		len_line;

	i = 0;
	len_line = ft_strlen(map->game_map[0]);
	while (map->game_map[i])
	{
		if (len_line != ft_strlen(map->game_map[i]))
			map_error("The map has to be a rectangle!\n", map);
		len_line = ft_strlen(map->game_map[i]);
		i++;
	}
}

static void	check_objects(t_map *map)
{
	if (map->exit != 1 )
		map_error("There should be only 1 exit\n", map);
	else if (map->player != 1)
		map_error("There should be only 1 player\n", map);
	else if (map->collect < 0)
		map_error("There should be at least 1 collectible\n", map);

}

static void	check_border(t_map *map)
{
	int	row;
	int	col;

	row = 0;
	while (row < map->width)
	{
		col = 0;
		while (col < map->length)
		{
			if (map->game_map[row][col] != '1')
				map_error("Invalid map\n", map);
			col++;
		}
		row += map->width;
	}
	col = 0;
	while (col < map->length)
	{
		row = 0;
		while (row < map->width)
		{
			if (map->game_map[row][col] != '1')
				map_error("Invalid map\n", map);
			row++;
		}
		col += map->length;
	}
}

void	map_validation(t_map *map)
{
	check_border(map);
	check_objects(map);
	check_rectangle(map);
}