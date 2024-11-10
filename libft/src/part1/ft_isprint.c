#include <stdio.h>

int ft_isprint(int c)
{
    if (32 <= c && c <= 126)
        return (1);
    return (0);
}

int main(void)
{
    int c = 127;
    printf("%d", ft_isprint(c));
    return (0);
}