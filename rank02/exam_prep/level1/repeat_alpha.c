#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	int i;
	int count = 1;
	char *str;
	str = argv[1];
	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (str[i] != '\0')
		{
			if ('a' <= str[i] && str[i] <= 'z')
			{
				count = str[i] - 'a';
				while (count >= 0)
				{
					write(1, &str[i], 1);
					count--;
				}
			}
			else if ('A' <= str[i] && str[i] <= 'Z')
			{
				count = str[i] - 'A';
				while (count >= 0)
				{
					write(1, &str[i], 1);
					count--;
				}
			}
			else
			{
				write(1, &str[i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}

	return (0);
}