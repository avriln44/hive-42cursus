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
    return (dest);
}

#include <string.h>
int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];
    ft_memcpy(dest, src, strlen(src) + 1);
    printf("%s\n", dest);
    return 0;
}