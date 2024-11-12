int ft_isascii(int c)
{
    if (0 <= c && c <= 127)
        return (1);
    return (0);
}
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int c = 'c';
    printf("%d", ft_isascii(c));
    return (0);
}