#include <unistd.h>
#include <stdio.h>

int check_double(const char *str, int c, int pos)
{
	int i;
	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int main(int argc, char **argv)
{
	int i;
	int j;
	char *str1 = argv[1];
	char *str2 = argv[2];
	if (argc == 3)
	{
		i = 0;
		while (str1[i] != 0)
		{
			if (!check_double(str1, str1[i], i))
			{
				j = 0;
				while (str2[j] != '\0')
				{
					if (str1[i] == str2[j])
					{
						write(1, &str1[i], 1);
						break;
					}
					j++;
				}

			}
			i++;
		}
	}
	write(1, "\n", 1);
}