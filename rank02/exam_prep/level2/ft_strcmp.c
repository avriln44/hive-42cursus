#include <unistd.h>
#include <stdio.h>
#include <string.h>
int ft_strcmp(const char *s1, const char *s2)
{
	size_t i;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i]  - s2[i]);
		i++;
	}
	return (0);
}
int main()
{
	const char *s1 = "texinh";
	const char *s2 = "tex";
	int i = ft_strcmp(s1, s2);
	printf("%d\n", i);
	printf("built-in strcmp: %d\n", strcmp(s1, s2));
	return (0);
}