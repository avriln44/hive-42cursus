// #include <unistd.h>
// void put_space(int c, int num)
// {
// 	c = ' ';
// 	while (num--)
// 		write(1, &c, 1);
// }
// void expand_str(char *str)
// {
// 	int i;
// 	i = 0;
// 	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
// 		i++;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == ' ' || str[i] == '\t')
// 		{
// 			while (str[i] == ' ' || str[i] == '\t')
// 				i++;
// 			if (str[i] != '\0')
// 				put_space(' ', 3);
// 		}
// 		if (str[i] != '\0')
// 		{
// 			write(1, &str[i], 1);
// 			i++;
// 		}
// 	}

// }
// int main()
// {
// 	char *str = "   te xinh    yeu";
// 	expand_str(str);
// 	return (0);
// }
#include <unistd.h>
int main(int argc, char **argv)
{
	char *str = argv[1];
	int i;
	i = 0;
	int end = 0;
	while (str[end])
		end++;
	end--;

	while (end >= 0 && (str[end] == ' ' || str[end] == '\t'))
		end--;

	if (argc != 2)
		write(1, "\n", 1);
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (i <= end )
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			if (str[i])
				write(1, "   ", 3);
		}

		write(1, &str[i], 1);
		i++;

	}
	write(1, "\n", 1);
}