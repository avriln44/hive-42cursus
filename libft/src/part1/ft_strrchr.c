#include <stdio.h>

char *ft_strrchr(char *s, int c)
{
    int i;
    i = 0;

    while (s[i] != '\0')
        i++;
    while (i > 0)
        {
            if (s[i] == c)
                return (&s[i]);
            i--;
        }
    if (c == '\0')
        return (s + i);
    return (NULL);
}
int main(void)
{
    char *s = "te xienh";
    // there is an occurence found
    printf("Found the last occurence: %s\n", ft_strrchr(s, 'e'));
    // null terminator case
    printf("null terminator case: %s\n", ft_strrchr(s, '\0'));
    // there is no occurrence found
    printf("There is no character found: %s\n", ft_strrchr(s, 'S'));
    return (0);
}