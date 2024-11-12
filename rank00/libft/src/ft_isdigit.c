int ft_isdigit(int c)
{
    if ('0' <= c && c <= '9')
        return (1);
    return (0);
}
#include <stdio.h>
int main(void)
{
    int c = '1';
    printf("%d",ft_isdigit(c));
    return(0);
}