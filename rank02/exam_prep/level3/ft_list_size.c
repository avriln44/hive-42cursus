#include "ft_list.h"
// int	ft_list_size(t_list *begin_list)
// {
// 	int count;
// 	count = 0;
// 	while (begin_list != '\0')
// 	{
// 		begin_list = begin_list->next;
// 		count++;
// 	}
// 	return (count);
// }

int	ft_list_size(t_list *begin_list)
{
	int count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}