#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	int i;
	i = 0;
	char *str;
	str = argv[1];
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
			i++;
		printf("i: %d\n", i);
		while (i > 0)
		{
			write(1, &argv[1][i-1], 1);
			i--;
		}
		write(1, "\n", 1);
	}
}