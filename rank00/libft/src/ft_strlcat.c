#include <stdio.h>
#include <string.h>
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i] != '\0')
        i++;
    while (j < size - i -1 && src[j] != '\0')
    {
        dst[j+i] = src[j];
        j++;
    }
    dst[i+j] = '\0';
    return (i+j);
}

#define DEST_SIZE 20
int main(void)
{
    char dest[DEST_SIZE] = "Hello, ";
    const char *src = "World!";
    size_t result;

    printf("Before strlcat:\n");
    printf("dest = \"%s\", length = %zu\n", dest, strlen(dest));

    result = ft_strlcat(dest, src, DEST_SIZE);

    printf("\nAfter strlcat:\n");
    printf("dest = \"%s\", length = %zu\n", dest, strlen(dest));
    printf("Value returned by strlcat: %zu\n", result);

    if (result >= DEST_SIZE) {
        printf("String truncation occurred.\n");
    }

    return 0;
}