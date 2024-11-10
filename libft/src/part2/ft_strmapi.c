#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char* str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int str_len = ft_strlen((char *)s);
    unsigned char *og = (unsigned char *)s;
    char *str = (char *)malloc((str_len + 1)*(sizeof(char)));

    i = 0;
    if (s == NULL || f == NULL)
        return (NULL);
    if (str == NULL)
        return (NULL);
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
void even_to_uppercase(unsigned int i, char *c)
    {
        if (i % 2 == 0) 
            c = c - 32;
    }
int main(void)
{
    char str[] = "hello";
    char *newstr = ft_strmapi(str, even_to_uppercase);
    printf("%s\n", newstr);
    return (0);
}