#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *nptr)
{
    int  i;
    i = 0;
    int count_minus;
    int count_plus;
    count_minus = 0;
    count_plus = 0;
    
    while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
            nptr++;
    while (nptr[i] != '\0' && ((nptr[i] == '-' || nptr[i] == '+')))
    {
        if (nptr[i] == '-')
            count_minus++;
        if (nptr[i] == '+')
            count_plus++;
    }
    if ((count_minus == 1 && count_plus != 0) || (count_plus == 1 && count_minus != 0) || (count_plus != 1 || count_minus != 1))
        return (0);
    else
          nptr++;  
    while ('0' <= nptr[i] && nptr[i] <= '9')
    {
        printf("%d\n", nptr[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    char nptr1[] = "1234";
    char nptr2[] = "   -123";
    char nptr3[] = "987 with text";
    char nptr4[] = "text before 123";
    ft_atoi(nptr1);
}
