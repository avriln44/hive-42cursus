#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char *str = "texinh";
	int i;
	i = ft_strlen(str);
	printf("length of the string: %d\n", i);
	return (0);
}