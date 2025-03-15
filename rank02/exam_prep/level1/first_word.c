#include <unistd.h>

// int main(int argc, char **argv)
// {
// 	int i;
// 	char *str;
// 	str = argv[1];
// 	i = 0;
// 	if (argc != 2)
// 		write(1, "\n", 1);

// 	else
// 	{

// 		while (*str == ' ' || *str == '\t')
// 			str++;
// 		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
// 		{
// 			write(1, &str[i], 1);
// 			i++;

// 		}
// 		write(1, "\n", 1);
// 	}
// 	return (0);
// }

int main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}