#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *call = (unsigned char *)malloc(nmemb * size);
    size_t i;
    i = 0;
    if (call == NULL)
        return (NULL);
    while ( i < nmemb)
    {
        call[i] = '\0';
        i++;
    }
    return (call);
}
int main(void)
{
    char *str1 = ft_calloc(5, sizeof(char));
    char *str2 = calloc(5, sizeof(char));
    printf("reproduced function result: %s\n", str1);

    printf("built-in function result: %s\n", str2);
    return (0);
}