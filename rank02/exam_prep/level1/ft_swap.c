#include <stdio.h>
void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

int main()
{
	int a = 4;
	int b = 2;
	printf("before swap:\n");
	printf("a:%d; b:%d\n", a, b);
	ft_swap(&a, &b);
	printf("after swap:\n");
	printf("a:%d; b:%d\n", a, b);
}