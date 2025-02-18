#include <stdio.h>
#include <stdlib.h>
#include "ft_strcmp.c"
#include "is_int.c"
#include "./libft/libft.h"
#include "count_words.c"
int is_duplicate(int *num_list, int size)
{
	int i;
	int j;
	i = 0;
	if (!num_list)
		return (0);
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (num_list[i] == num_list[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int *get_num_list(int num, char *str)
{
	int i;
	i = 0;
	int **num_list;
	num_list = (int *)malloc((num) * sizeof(int));
	if (!num_list)
		return (NULL);
	num_list = ft_split(str, ' ');
	while (i < num)
	{
		if (is_int(str[i]))
			num_list[i] = ft_atoi(str[i]);
		else
		{
			free(num_list);
			return (NULL);
		}
		i++;
	}
	if (is_duplicate(num_list, num))
	{
		free(num_list);
		return (NULL);
	}
	return (num_list);
}

// int main()
// {
// 	char *arr[] = {"1", "22", "44", "8", "10", "-23", "21", "3", "4", "0", "0"};
// 	int num = 11;
// 	int *num_list;
// 	num_list = get_num_list(num, arr);
// 	if (!num_list)
// 	{
// 		printf("%s\n", "null");
// 	}

// 	int i = 0;
// 	while (i < num)
// 	{
// 		printf("%d\n", num_list[i]);
// 		i++;
// 	}
// 	free(num_list);
// 	return (0);
// }

// int main()
// {
// 	int num_list[] = {1, 0, 3, 2, 4};
// 	printf("%d\n", is_duplicate(num_list, 5));
// 	return (0);
// }
