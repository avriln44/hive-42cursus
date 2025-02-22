/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:34:00 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/22 15:47:01 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int count_words(const char *s, char delimiter)
{
    int count;
    int in_word;

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
int arr_length(int size, char **arr)
{
    int i;
    i = 0;
    int final_count;
    final_count = 0;
    while (i < size)
    {
        final_count += count_words(arr[i], ' ');
        i++;
    }
    return (final_count);
}
// #include <stdio.h>
// int main()
// {
//     char *arr[] = {" te xinh yeu", "6", "1 3 4"};
//     printf("%d\n", arr_length(3, arr));
//     return (0);
// }