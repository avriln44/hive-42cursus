#include <stdio.h>
#include <string.h>
char *ft_strchr(const char *str, int c)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
char *ft_strpbrk(const char *s, const char *accept)
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]))
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

int main()
{
	const char str[] = "helo world";
    const char accept[] = "oe";
	char *res;
	res = ft_strpbrk(str, accept);
	printf("%s\n", res);
	printf("built-in strpbrk: %s\n", strpbrk(str, accept));
	return (1);
}