#include <unistd.h>
#include <stdlib.h>
void snake_to_camel(char *str)
{
	int i;
	int j;
	i = 0;
	j = 0;
	char *modified;
	modified = (char *)malloc(1000);
	if (!str || !modified)
		return;
	while (str[i] != '\0')
	{
		if (str[i] == '_' && str[i+1] )
		{
			modified[j] = str[i+1] - 32;
			i++;
		}
		else
		{
			modified[j] = str[i];
		}
		i++;
		j++;
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
		snake_to_camel(argv[1]);
	write(1, "\n", 1);

}