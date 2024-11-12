int ft_isalpha(int c)
{
    if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
        return (1);
    return (0);
}
#include <stdio.h>
int main(void)
{
    int c = 'c';
    printf("%d",ft_isalpha(c));
    return(0);
}