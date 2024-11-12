#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    j = 0;
    while (src[j] != '\0')
        j++;
    i = 0;
    while (i < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (j);
}

#define DEST_SIZE 10
int main(void)
{
    char src[] = "Hello, World! This is a long string.";
    char dst[DEST_SIZE];
    size_t size_src = ft_strlcpy(dst, src, DEST_SIZE);
     printf("Source string: %s\n", src);
    printf("Destination buffer: %s\n", dst);
    printf("Source length: %zu\n", size_src);
    printf("Destination buffer size: %d\n", DEST_SIZE);

    // Check if truncation occurred
    if (size_src >= DEST_SIZE) {
        printf("Warning: String was truncated\n");
        printf("Characters that would be truncated: %zu\n", size_src - DEST_SIZE + 1);
    } else {
        printf("String was copied completely\n");
    }
    return (0);
}