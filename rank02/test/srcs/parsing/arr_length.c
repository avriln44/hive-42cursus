/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:34:00 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/03/30 13:13:14 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_words(const char *s, char delimiter)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != delimiter && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == delimiter)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

int	arr_length(int size, char **arr)
{
	int	i;
	int	final_count;

	i = 1;
	final_count = 0;
	while (i < size)
	{
		if (arr[i] != NULL)
		{
			final_count += count_words(arr[i], ' ');
		}
		i++;
	}
	return (final_count);
}
