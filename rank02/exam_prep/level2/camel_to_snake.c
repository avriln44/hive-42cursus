#include <unistd.h>
#include <stdlib.h>
void camel_to_snake(char *str)
{
	int i;
	i = 0;
	int j;
	j = 0;
	int len;
	len = 0;
	if (!str)
		return;
	while (str[len] != '\0')
		len++;
	char *modified;
	modified   = (char *)malloc(len *2);
	if (!modified)
		return;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			if (i > 0)
			{
				modified[j] = '_';
				j++;
			}
			modified[j] = str[i] + 32;
		}
		else
		{
			modified[j] = str[i];
		}
		j++;
		i++;
	}
	modified[j] = '\0';
	write(1, modified, j);
	free(modified);
}
int main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1);

}