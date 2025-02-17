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
		while (str[i] != 0)
		{
			if ('a' <= str[i] && str[i] <= 'm' || 'A' <= str[i] && str[i] <= 'M')
			{
				str[i] += 13;
				write(1, &str[i], 1);
			}
			else if ('n' <= str[i] && str[i] <= 'z' || 'N' <= str[i] && str[i] <= 'Z')
			{
				str[i] -= 13;
				write(1, &str[i], 1);
			}
			else
				write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}