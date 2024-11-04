#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    const unsigned char *str = (const unsigned char *)src;
    unsigned char *result = (unsigned char *)dest;
    size_t i;

    i = 0;
    while (i < n)
    {
        result[i] = str[i];
        i++;
    }
    result[i] = '\0';
    return ((void *)dest);
}

int main(void)
{
    char src[50] = "te xinh yeu";
    char dest[50];
    printf("%s\n",ft_memcpy(dest, src, 5));
    return (0);
}