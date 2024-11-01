#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    i = 0;
    const char *str;
    str = s;
    while (str[i] != '\0' && i < n)
    {
        if (str[i] == c)
            return (&str[i]);
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
