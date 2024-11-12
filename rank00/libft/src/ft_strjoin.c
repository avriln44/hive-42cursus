#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int len;
    unsigned char *str1 = (unsigned char *)s1;
    unsigned char *str2 = (unsigned char *)s2;
    unsigned char *joined;
    i = 0;
    j = 0;
    while (str1[i] != '\0')
        i++;
    while (str2[j] != '\0')
        j++;
    len  = i + j;
    i = 0;
    j = 0;

    joined = (unsigned char *)malloc((len +1)*sizeof(char));
    len = 0;
    if (joined == NULL)
        return (NULL);
    while (str1[i] != '\0')
    {
        joined[len] = str1[i];
        i++;
        len++;
    }
    while (str2[j] != '\0')
    {
        joined[len] = str2[j];
        len++;
        j++;
    }
    joined[len] = '\0';
    return ((char *)joined);
}

int main(void)
{
    const char str1[] = "hello ";
    const char str2[] = "world";
    char *joined = ft_strjoin(str1, str2);
    printf("%s\n", joined);
    return (0);
}