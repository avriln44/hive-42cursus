#include <unistd.h>
#include <stdio.h>
char *ft_strrev(char *str)
{
	int i;
	int len;
	char temp;
	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (i < len/2)
	{
		temp = str[i];
		str[i] = str[len -i - 1];
		str[len - i -1] = temp;
		i++;
	}
	return (str);
}
int main()
{
	char str[] = "te xinh";
	char *new;
	new = ft_strrev(str);
	printf("%s\n", new);
}