#include <stdlib.h>
#include <stdio.h>
// char *ft_strdup(char *str)
// {
// 	int i;
// 	i = 0;
// 	while (str[i] != '0')
// 		i++;
// 	char *new;
// 	new = malloc(i +1);
// 	i = 0;
// 	if (!new)
// 		return (NULL);
// 	while (str[i] != '\0')
// 	{
// 		new[i] = str[i];
// 		i++;
// 	}
// 	new[i] = '\0';
// 	return (new);
// }
// int is_negative(long num)
// {
// 	if (num < 0)
// 		return (1);
// 	return (0);
// }
// int num_len(long num)
// {
// 	int len;
// 	len = 0;
// 	if (num == 0)
// 		return (1);
// 	if (num < 0)
// 		num = -num;
// 	while (num > 0)
// 	{
// 		num = num / 10;
// 		len++;
// 	}
// 	return (len);
// }
// char *ft_itoa(int nbr)
// {
// 	long num;
// 	num = nbr;
// 	int len;
// 	len = num_len(num);
// 	char *str;

// 	if (nbr == 0)
// 		return (ft_strdup("0"));
// 	if (is_negative(num))
// 	{
// 		num = -num;
// 		len++;
// 	}
// 	str = malloc((len + 1) * sizeof(char));
// 	str[len--] = '\0';
// 	if (!str)
// 		return (NULL);
// 	while (num > 0)
// 	{
// 		str[len--] = (num % 10) + '0';
// 		num = num / 10;
// 	}
// 	if (is_negative(nbr))
// 		str[0] = '-';
// 	return (str);
// }

char *ft_strdup(char *str)
{
	int len = 0;
	if (!str)
		return (NULL);
	while (str[len])
		len++;
	char *dup;
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	len = 0;
	while (str[len])
	{
		dup[len] = str[len];
		len++;
	}
	dup[len] = '\0';
	return (dup);

}
int is_negative(long num)
{
	if (num  < 0)
		return (1);
	return (0);
}
int num_len(long num)
{
	int num_len = 0;
	if (num == 0)
		return (-1);
	if (is_negative(num))
		num = -num;
	while  (num > 0)
	{
		num =  num /10;
		num_len++;
	}
	return (num_len);
}
char *ft_itoa(int nbr)
{
	long num;
	num = nbr;
	if (num == 0)
		return (ft_strdup("0"));
	int len = num_len(nbr);
	if (num < 0)
	{
		num = -num;
		len++;
	}
	char *str;
	str =  (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (num > 0)
	{
		str[len--] = num % 10 + '0';
		num = num / 10;
	}
	if (is_negative(nbr))
		str[0] = '-';
	return (str);
}
int main()
{

	int num = -123;
	char *str = ft_itoa(num);
	printf("%s\n", str);
	return (0);
}