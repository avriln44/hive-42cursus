#include <stdio.h>
int	ft_atoi(const char *str)
{
	int i;
	i = 0;
	int sign;
	sign = 1;
	int result;
	result = 0;
	while (str[i] == ' ' || 9 <= str[i] && str[i] <= 13)
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
	return (result * sign);

}
int main()
{
	const char *str = "+234";
	int num = ft_atoi(str);
	printf("%d", num);
}