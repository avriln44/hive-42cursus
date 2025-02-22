#include "libft.h"

void ft_free_arr_3d(char ***arr)
{
    int i;

    i = 0;
    while (arr[i])
    {
        ft_free_arr_2d(arr[i]);
        arr[i] = NULL;
        i++;
    }
    free(arr);
}