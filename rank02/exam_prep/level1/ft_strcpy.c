#include <unistd.h>
#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
int main()
{
	char s1[100];
	char *s2 = "te xinh";
	char *res;
	res = ft_strcpy(s1, s2);
	printf("%s\n", res);
}