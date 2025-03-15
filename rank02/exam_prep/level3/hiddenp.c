#include <unistd.h>
#include <stdio.h>

// int is_hidden(char *str1, char *str2)
// {
// 	int i;
// 	i = 0;
// 	int j;
// 	j = 0;
// 	while (str2[j] != '\0')
// 	{
// 		if (str1[i] == str2[j])
// 		{
// 			i++;
// 		}
// 		if (str1[i] == '\0')
// 			return (1);
// 		j++;

// 	}
// 	return (0);
// }
// int main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		if (is_hidden(argv[1], argv[2]))
// 			write(1, "1", 1);
// 		else
// 			write(1, "0", 1);
// 	}
// 	write(1, "\n", 1);
// }

int is_hidenp(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	while (str2[i] != '\0')
	{
		if (str1[j] == str2[i])
			j++;
		i++;
		if (str1[j] == '\0')
			return (1);
	}
	return (0);
}
int main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "\n", 1);
	if (is_hidenp(argv[1], argv[2]))
		write(1, "1", 1);
	else
		write(1, "0", 1);
}