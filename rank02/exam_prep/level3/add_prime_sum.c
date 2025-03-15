#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// int is_prime(int num)
// {
// 	int i;
// 	i = 2;
// 	if (num < 2)
// 		return (0);
// 	while ( i * i <= num)
// 	{
// 		if (num % i == 0)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }
// int add_prime_sum(int num)
// {
// 	int i;
// 	i = 2;
// 	int sum;
// 	sum = 0;
// 	while (i <= num)
// 	{
// 		if (is_prime(i))
// 			sum += i;
// 		i++;
// 	}
// 	return (sum);
// }
// void ft_putnbr(int num)
// {
// 	char nbr;
// 	if (num >= 10)
// 		ft_putnbr(num / 10);
// 	nbr = (num % 10) + '0';
// 	write(1, &nbr, 1);
// }
// int ft_atoi(char *nbr)
// {
// 	int i = 0;
// 	int result;
// 	result = 0;
// 	while ('0' <= nbr[i] && nbr[i] <= '9')
// 	{
// 		result = (result * 10) + (nbr[i] - '0');
// 		i++;
// 	}
// 	return (result);
// }
// int main(int argc, char **argv)
// {
// 	int num;
// 	num = ft_atoi(argv[1]);
// 	//printf("%d\n", add_prime_sum(num));
// 	if (argc == 2)
// 	{
// 		ft_putnbr(add_prime_sum(num));
// 	}
// }

int is_prime(int num)
{
	int i;
	i = 2;
	if (num < 2)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int main()
{
	printf("%d\n", is_prime(9));
}