#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] != '\0' && little[j] != '\0'
			&& big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)little);
		}
		i++;
	}
    return (NULL);
}

int main(void)
{
    const char big[] = "te xinh yeu";
    const char little[] = "yeu";
    const char *result = ft_strnstr(big, little, 15);

    if (result)
        printf("%s\n", result);
    else
        printf("Error!\n");
    return (0);
}