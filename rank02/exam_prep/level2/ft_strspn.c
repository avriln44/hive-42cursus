#include <stdio.h>
#include <unistd.h>
char *ft_strchr(const char *str, int c)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&str[i]);
			i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (NULL);
}
size_t ft_strspn(const char *s, const char *accept)
{
	int i;
	i = 0;
	while (s[i])
	{
		if (!ft_strchr(accept, s[i]))
			return (i);
		i++;
	}
	return (i);
}
int main()
{
	const char *str = "3trojan";
	const char *accept = "i1234";
	int i = ft_strspn(str, accept);
	printf("%d\n", i);
	printf("built-in strcpn: %d\n", strspn(str, accept));
	return (0);
}