#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    char *newstr;
    newstr = s;
    while (newstr[i] != '\0')
        i++;
    while (newstr[n] != '\0')
    {
        newstr[n] = '\0';
        n++;
    }
}

int main(void)
{
    char s[20] = "Hello world";
    ft_bzero(s, 1);
    printf("%s\n", s);
    return (0);
}