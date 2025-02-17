#include <unistd.h>
void ft_putnbr(int num)
{
	char nbr;
	if (num >=10)
		ft_putnbr(num / 10);
	nbr = num % 10 + '0';
	write(1, &nbr, 1);
}
int main(int argc, char **argv)
{
	if (argc >= 2)
		ft_putnbr(argc -1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}