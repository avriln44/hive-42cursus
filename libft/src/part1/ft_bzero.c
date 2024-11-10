#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    char *newstr = (char *)s;

    while (i < n)
    {
        newstr[i] = '\0';
        i++;
    }
}

int main(void)
{
    char s[30] = "Hello world te xinh";
    ft_bzero(s, 10);
    int i;
    i = 0;
    while (i < 30)
    {
        if (s[i] == '\0')
        {
            printf("0");
        }
        else
            printf("%c", s[i]);
        i++;
    }
    printf("\n");
    return (0);
}