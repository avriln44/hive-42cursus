#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i] != '\0')
    {
        f(i, &(s[i]));
        i++;
    }
}
void even_to_uppercase(unsigned int i, char *c)
    {
        if (i % 2 == 0) 
            *c = *c - 32;
    }

int main(void)
{
    char str[] = "hello";
    ft_striteri(str, even_to_uppercase);
    printf("%s\n", str);
    return (0);
}