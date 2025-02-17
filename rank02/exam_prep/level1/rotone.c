#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	char *str;
	i = 0;
	str = argv[1];
	if (argc != 2)
		write(1, "\n", 1);
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'y') || ('A' <= str[i] && str[i] <= 'Y'))
		{
			str[i] += 1;
			write(1, &str[i], 1);
		}
		else if (str[i] == 'z')
			write(1, "a", 1);
		else if (str[i] == 'Z')
			write(1, "A", 1);
		else
			write(1, &str[i], 1);
		i++;;
	}
	write(1, "\n", 1);
}