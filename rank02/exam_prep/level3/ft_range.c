#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
static int *ft_range_increasing(int start, int end)
{
	int size;
	int i = 0;
	int *list;
	size = end - start + 1;
	if (size == 0)
		return (NULL);
	list = (int *)malloc(size * sizeof(int));
	if (!list)
		return (NULL);
	while (i < size)
	{
		list[i] = start;
		start++;
		i++;
	}
	return (list);
}
static int *ft_range_decreasing(int start, int end)
{
	int size;
	int i = 0;
	int *list;
	size = start - end + 1;
	if (size == 0)
		return (NULL);
	list = (int *)malloc(size * sizeof(int));
	if (!list)
		return (NULL);
	while (i < size)
	{
		list[i] = start;
		start--;
		i++;
	}
	return (list);
}
int *ft_range(int start, int end)
{
	int *list;
	if (start > end)
		list = ft_range_decreasing(start, end);
	else
		list = ft_range_increasing(start, end);
	return (list);
}
int main()
{
	int i;
	i = 0;
	int start = 0;
	int end = -3;
	int size = (start > end) ? (start - end + 1) : (end - start + 1);
	int *list = ft_range(start, end);
	while (i < size)
	{
		printf("%d\n", list[i]);
		i++;
	}
	free(list);
	return (0);
}