#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr = (char *)malloc((len + 1) * sizeof(char));
    size_t i = 0;
    
    if (!substr)
        return NULL;
    while (i < len) {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return substr;
}

int main(void)
{
    const char s[] = "te xinh";
    char *sub = ft_substr(s, 3, 3);
    printf("%s\n",sub);
}