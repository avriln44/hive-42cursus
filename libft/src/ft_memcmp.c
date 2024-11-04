#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *str1 = (const unsigned char *)s1;
    const unsigned char *str2 = (const unsigned char *)s2;

    i = 0;
    while (i < n)
    {
        if (str1[i] - str2[i] != 0)
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    char s1[20] = "te xinh";
    char s2[20] = "te yeu";
    printf("%d\n", ft_memcmp(s1, s2, 4));
    return (0);
}