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
static int is_in_str(char *str, char c)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int i;
    int j;
    unsigned char *str1 = (unsigned char *)s1;
    unsigned char *set_char = (unsigned char *)set;
    unsigned char *newstr;

    start = 0;
    end = ft_strlen((char *)str1) - 1;
    while (str1[start] && is_in_str((char *)set, str1[start]))
        start++;
    while (end >= start && is_in_str((char *)set, str1[end]))
        end--;
    newstr = (unsigned char *)malloc((end - start + 2) * sizeof(char));
    if (newstr == NULL)
        return (NULL);
    j = 0;
    while (start <= end)
    {
        newstr[j] = str1[start];
        j++;
        start++;
    }
    newstr[j] = '\0';
    return ((char *)newstr);
}
int main(void)
{
    char str[] = "cadefabefghaewacb";
    char set[] = "abc";
    char *trim = ft_strtrim(str, set);
    if (trim)
    {
        printf("%s\n", trim);
        free(trim);
    }
    printf("%d\n", is_in_str(set, 'a'));
}