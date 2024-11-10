#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    i = 0;
    unsigned char *str = (unsigned char *)s;
    unsigned char *sub;
    sub = (unsigned char *)malloc((len + 1) * sizeof(char));
    if (sub == NULL)
        return (NULL);
    while (i < len)
    {
        sub[i] = str[start];
        i++;
        start++;
    }
    sub[i] = '\0';
    return ((char*)sub);
}

int main(void)
{
    const char s[] = "te xinh";
    char *sub = ft_substr(s, 3, 3);
    printf("%s\n",sub);
}