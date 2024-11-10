#include <stdio.h>

int ft_tolower(int c)
{
    if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
        if (65 <= c && c <= 90)
            return (c + 32);
        return (c);
}

int main(void)
{
    int c = 'N';
    printf("%c",ft_tolower(c));
    return (0);
}