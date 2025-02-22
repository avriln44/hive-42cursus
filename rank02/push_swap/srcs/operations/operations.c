/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-mngu <thi-mngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:16:22 by thi-mngu          #+#    #+#             */
/*   Updated: 2025/02/11 17:19:53 by thi-mngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	sa(int *stack_a)
{
	int	temp;
	if (!stack_a || !stack_a[1])
		return;
	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = temp;
}
void	sb(int *stack_b)
{
	int	temp;
	if (!stack_b || !stack_b[1])
		return;
	temp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = temp;
}
void ss(int *stack_a, int *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void pa(int *stack_a, int *stack_b, size_t *len_a, size_t *len_b)
{
    size_t i;
    size_t j;

    if (*len_b == 0)
        return;
    i = *len_a;
    while (i > 0)
    {
        stack_a[i] = stack_a[i - 1];
        i--;
    }
    stack_a[0] = stack_b[0];
    j = 0;
    while (j < *len_b - 1)
    {
        stack_b[j] = stack_b[j + 1];
        j++;
    }
    (*len_a)++;
    (*len_b)--;
}
void pb(int *stack_a, int *stack_b, size_t *len_a, size_t *len_b)
{
    size_t i;
    size_t j;

    if (*len_a == 0)
        return;
    i = *len_b;
    while (i > 0)
    {
        stack_b[i] = stack_b[i - 1];
        i--;
    }
    stack_b[0] = stack_a[0];
    j = 0;
    while (j < *len_a - 1)
    {
        stack_a[j] = stack_a[j + 1];
        j++;
    }
    (*len_b)++;
    (*len_a)--;
}
void ra(int *stack_a)
{
	int i;
	i = 0;
	if (!stack_a)
		return;
	int temp;
	temp = stack_a[0];
	while (stack_a[i] != '\0')
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i - 1] = temp;
}
void rb(int *stack_b)
{
	int i;
	i = 0;
	if (!stack_b)
		return;
	int temp;
	temp = stack_b[0];
	while (stack_b[i] != '\0')
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i - 1] = temp;
}
void rra(int *stack_a)
{
	int i;
	i = 0;
	if (!stack_a)
		return;
	while (stack_a[i] != '\0')
		i++;
	int temp;
	temp = stack_a[i - 1];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = temp;
}
void rrb(int *stack_b)
{
	int i;
	i = 0;
	if (!stack_b)
		return;
	while (stack_b[i] != '\0')
		i++;
	int temp;
	temp = stack_b[i - 1];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = temp;
}
int main()
{
	int stack_a[] = {5, 8, 6};
    int stack_b[] = {4, 5, 6, 7};
    int i;
    size_t len_a = sizeof(stack_a) / sizeof(int);
	printf("length of stack a: %d", len_a);
    size_t len_b = sizeof(stack_b) / sizeof(int);

    printf("Before pa operation:\n");
    printf("Stack A: ");
    for (i = 0; i < len_a; i++)
        printf("%d ", stack_a[i]);
    printf("\n");
	rra(stack_a);
	printf("\nAfter pa operation:\n");
    printf("Stack A: ");
    for (i = 0; i < len_a; i++)
        printf("%d ", stack_a[i]);
    printf("\n");

}
// int main()
// {
//     int stack_a[] = {1, 2, 3};
//     int stack_b[] = {4, 5, 6, 7};
//     int i;
//     size_t len_a = sizeof(stack_a) / sizeof(int);
// 	printf("length of stack a: %d", len_a);
//     size_t len_b = sizeof(stack_b) / sizeof(int);

//     printf("Before pa operation:\n");
//     printf("Stack A: ");
//     for (i = 0; i < len_a; i++)
//         printf("%d ", stack_a[i]);
//     printf("\n");
//     printf("Stack B: ");
//     for (i = 0; i < len_b; i++)
//         printf("%d ", stack_b[i]);
//     printf("\n");

//     // Pass the lengths by reference so they can be modified in the function
//     pa(stack_a, stack_b, &len_a, &len_b);

//     printf("\nAfter pa operation:\n");
//     printf("Stack A: ");
//     for (i = 0; i < len_a; i++)
//         printf("%d ", stack_a[i]);
//     printf("\n");
//     printf("Stack B: ");
//     for (i = 0; i < len_b; i++)
//         printf("%d ", stack_b[i]);
//     printf("\n");

//     return 0;
// }

