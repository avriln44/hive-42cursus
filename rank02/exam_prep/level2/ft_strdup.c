#include <stdlib.h>
char *ft_strdup(char *src)
{
	char *dup;
	int i;
	i = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\0')
		i++;
	dup = malloc(i+1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
#include <stdio.h>
int main()
{
	char *str = "te xinh";
	char *dup;
	dup = ft_strdup(str);
	printf("the duplicate string: %s\n", dup);
	return (0);
}