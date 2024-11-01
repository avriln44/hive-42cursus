#include <stdio.h>

void *ft_memset(void *ptr, int x, size_t n)
{
    int i;
    i = 0;
    char *newptr;
    newptr = ptr;

    while (newptr[i] != '\0' && i < n)
    {
        newptr[i] = x;
    }
    return (newptr);
}
int main(void)
{
    char* ptr = "te xinh yeu";
    printf("%s", ft_memset(ptr, '0', 3*sizeof(char)));
    return (0);
}