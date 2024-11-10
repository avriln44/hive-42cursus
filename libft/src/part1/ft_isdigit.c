#include <unistd.h>
void ft_isalpha(int c)
{
    if ('0' <= c && c <= '9')
        return (1);
    return (0);
}

int main(void)
{
    int c = '1';
    printf("%d",ft_isalpha(c));
    return(0);
}