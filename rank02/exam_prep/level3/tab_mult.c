#include <unistd.h>
int ft_atoi(char *str)
{
	int i;
	int result;
	int sign = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13 ))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
void ft_putnbr(int num)
{
	char nbr;
	if (num >= 10)
		ft_putnbr(num / 10);
	nbr = num % 10 + '0';
	write(1, &nbr, 1);
}
void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int argc, char **argv)
{
	int i;
	i = 1;
	int multiplier = ft_atoi(argv[1]);
	if (argc ==  )

	ft_putnbr(4);
	ft_putstr(" x ");
	ft_putnbr(9);
	ft_putstr(" = ");
	ft_putnbr(4 * 9);
}