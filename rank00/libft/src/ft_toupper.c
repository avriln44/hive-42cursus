#include <stdio.h>

int ft_toupper(int c)
{
    if (97 <= c && c <= 122)
        return (c - 32);
    return (c);
}

int main(void)
{
    int c = 'n';
    printf("%c\n",ft_toupper(c));
    return (0);
}