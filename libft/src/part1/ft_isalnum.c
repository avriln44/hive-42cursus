#include <stdio.h>
 int isalnum(int c)

{
    if ((65 <= c && c <= 90) || (97 <= c && c <= 122) || (   ('0' <= c && c <= '9')))
        return (1);
    return (0);
}

int main(void)
{
    char c = ';';
    printf("%d",ft_isalnum(c));
    return(0);
}