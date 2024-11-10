#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    const unsigned char *str = (const unsigned char *)s;

    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return ((void *)&str[i]);
        i++;
    }
    return (NULL);
}
int main(void)
{
    char s[20] = "texinh";
    printf("%s\n", ft_memchr(s, 'x', 20));
    return (0);
}
