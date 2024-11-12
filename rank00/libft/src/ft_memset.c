#include <stdio.h>

void *ft_memset(void *ptr, int x, size_t n)
{
    size_t i;
    unsigned char *newptr = (unsigned char *)ptr;

    i = 0;

    while (i < n)
    {
        newptr[i] = (unsigned char)x;
        i++;
    }
    return (ptr);
}
int main(void)
{
    char str[20] = "Hello, World!"; // Mutable array
    printf("Before memset: %s\n", str);

    // Set the first 5 characters to 'X'
    ft_memset(str, 'X', 5);
    printf("After memset: %s\n", str); // Output: "XXXXX, World!"

    return 0;
}