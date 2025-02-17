#include <unistd.h>
int check_double(char *str, int c, int pos)
{
	int i;
	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}
int main(int argc, char ** argv)
{
	int i;
	int j;
	char *str1 = argv[1];
	char *str2 = argv[2];
	if (argc == 3)
	{
		i = 0;
		while (str1[i] != '\0')
		{
			if (!check_double(str1, str1[i], i))
				write(1, &str1[i], 1);
			i++;
		}
		j = 0;
		while (str2[j] != '\0')
		{
			if (!check_double(str1,  str2[j], i) && !check_double(str2, str2[j], j))
				write(1, &str2[j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}