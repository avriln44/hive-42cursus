#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int start;
	int end;
	char *str = argv[1];
	if (argc == 2)
	{
		i = 0;
		while (str[i] != '\0')
			i++;
		i--;
		while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
			i--;
		end = i;
		while (i >= 0 && str[i] != ' ' && str[i] != '\t')
			i--;
		start = i + 1;
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
}