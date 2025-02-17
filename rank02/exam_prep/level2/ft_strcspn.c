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
size_t ft_strcspn(const char *s, const char *reject)
{
	int i;
	i = 0;
	while (s[i])
	{
		if (ft_strchr(reject, s[i]))
			return (i);
		i++;
	}
	return (i);
}
int main()
{
	const char *str = "trojan3";
	const char *reject = "1234";
	int i = ft_strcspn(str, reject);
	printf("%d\n", i);
	printf("built-in strcspn: %d\n", strcspn(str, reject));
	return (0);
}
