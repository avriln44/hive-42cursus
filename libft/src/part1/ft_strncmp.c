#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] != '\0' &&  s2[i] != '\0' && i < (n-1))
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

int main(void)
{
    char *s1 = "Helloo";
    char *s2 = "Hellio";
    printf("%d\n", ft_strncmp(s1, s2, 4));
    return (0);
}