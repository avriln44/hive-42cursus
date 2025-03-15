#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
// static int *ft_range_increasing(int start, int end)
// {
// 	int size;
// 	int i = 0;
// 	int *list;
// 	size = end - start + 1;
// 	if (size == 0)
// 		return (NULL);
// 	list = (int *)malloc(size * sizeof(int));
// 	if (!list)
// 		return (NULL);
// 	while (i < size)
// 	{
// 		list[i] = start;
// 		start++;
// 		i++;
// 	}
// 	return (list);
// }
// static int *ft_range_decreasing(int start, int end)
// {
// 	int size;
// 	int i = 0;
// 	int *list;
// 	size = start - end + 1;
// 	if (size == 0)
// 		return (NULL);
// 	list = (int *)malloc(size * sizeof(int));
// 	if (!list)
// 		return (NULL);
// 	while (i < size)
// 	{
// 		list[i] = start;
// 		start--;
// 		i++;
// 	}
// 	return (list);
// }
// int *ft_range(int start, int end)
// {
// 	int *list;
// 	if (start > end)
// 		list = ft_range_decreasing(start, end);
// 	else
// 		list = ft_range_increasing(start, end);
// 	return (list);
// }
// int main()
// {
// 	int i;
// 	i = 0;
// 	int start = 0;
// 	int end = -3;
// 	int size = (start > end) ? (start - end + 1) : (end - start + 1);
// 	int *list = ft_range(start, end);
// 	while (i < size)
// 	{
// 		printf("%d\n", list[i]);
// 		i++;
// 	}
// 	free(list);
// 	return (0);
// }

int     *ft_range(int start, int end)
{
	int *plus_arr;
	int *minus_arr;
	int plus_range;
	int minus_range;
	int i = 0;
	if (start - end >= 0)
		plus_range = start - end + 1;
	else
		minus_range = end - start + 1;
	plus_arr = (int *)malloc((plus_range + 1) * sizeof(int));
	minus_arr = (int *)malloc((minus_range + 1) * sizeof(int));
	if (start - end >= 0)
	{
		while (i  <=  plus_range)
		{
			plus_arr[i] = start;
			i++;
			start--;
		}
		return (plus_arr);
	}
	else
	{
		while (i <= minus_range)
		{
			minus_arr[i] = start;
			i++;
			start++;
		}
		return (minus_arr);
	}

}
int main(void)
{
	int start = 1;
	int end = 3;
	int *arr = ft_range(1, 3);
	int i = 0;
	while (i < 3)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
