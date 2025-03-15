#include <unistd.h>
#include <stdio.h>

// int check_double(const char *str, int c, int pos)
// {
// 	int i;
// 	i = 0;
// 	while (i < pos)
// 	{
// 		if (str[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }
// int main(int argc, char **argv)
// {
// 	int i;
// 	int j;
// 	char *str1 = argv[1];
// 	char *str2 = argv[2];
// 	if (argc == 3)
// 	{
// 		i = 0;
// 		while (str1[i] != 0)
// 		{
// 			if (!check_double(str1, str1[i], i))
// 			{
// 				j = 0;
// 				while (str2[j] != '\0')
// 				{
// 					if (str1[i] == str2[j])
// 					{
// 						write(1, &str1[i], 1);
// 						break;
// 					}
// 					j++;
// 				}

// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }

int already_seen(char *str, char c, int index)
{
	int i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}


void wdmatch(char *str1, char  *str2)
{
	int i = 0;
	int j =  0;
	while (str2[j])
	{
		if (str1[i] == str2[j])
			i++;
		j++;
	}
	if (!str1[i])
	{
		i = 0;
		while (str1[i])
		{
			write(1, &str1[i], 1);
			i++;
		}
	}
}
void inter(char *str1, char *str2)
{
	int i = 0;
	int j;
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j] && !already_seen(str1, str1[i], i))
			{
				write(1, &str1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}
void ft_union(char *str1, char *str2)
{
	int i = 0;
	int j = 0;

	while (str1[i])
	{
		if (!already_seen(str1, str1[i], i))
			write(1, &str1[i], 1);
		i++;
	}
	while (str2[j])
	{
		if (!already_seen(str1, str2[j], j) && !already_seen(str2, str2[j], j))
			write(1, &str2[j], 1);
		j++;
	}
}
int main(int argc, char **argv)
{
	// if (argc == 3)
	// 	wdmatch(argv[1], argv[2]);
	// if (argc == 3)
	// 	inter(argv[1], argv[2]);
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}
