// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/02/22 13:34:27 by thi-mngu          #+#    #+#             */
// /*   Updated: 2025/02/22 15:17:25 by thi-mngu         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "push_swap.h"

char ***get_arr(int size, char **str)
{
	int i;
	int	j;
	char ***new_arr;

	i = 0;
	j = 1;
	new_arr = (char ***)malloc((size + 1) * sizeof(char **));
	if (!new_arr)
		return (NULL);
	while (i <= size - 1 && j <= size)
	{
		new_arr[i] = (char **)malloc(((count_words(str[j], ' ')) + 1) * sizeof(char *));
		new_arr[i] = ft_split(str[j], ' ');
		if (!new_arr[i])
			ft_free_process_3d(new_arr, i);
		i++;
		j++;
	}
	new_arr[size] = NULL;
	return (new_arr);
}
