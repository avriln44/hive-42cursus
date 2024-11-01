#include <stdio.h>

void *ft_memset(void *ptr, int x, size_t n)
{
    size_t i;
    char *newptr;

    i = 0;
    newptr = ptr;

    while (i < n)
    {
        newptr[i] = x;
        i++;
    }
    return (newptr);
}

// int main(void)
// {
//     char ptr[20] = "te xinh yeu";
//     printf("%s\n", ft_memset(ptr+5, '0', 3*sizeof(char)));
//     return (0);
// }

int main(void)
{
    char str[20] = "Hello, World!"; // Mutable array
    printf("Before memset: %s\n", str);

    // Set the first 5 characters to 'X'
    ft_memset(str, 'X', 5);
    printf("After memset: %s\n", str); // Output: "XXXXX, World!"

    return 0;
}