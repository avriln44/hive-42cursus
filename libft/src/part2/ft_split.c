#include <stdio.h>
#include <stdlib.h>

int count(char *s, char c)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            count++;
        i++;
    }
    return (count);
}
char *ft_strdup(const char *s)
{
    int i;
    unsigned char *src = (unsigned char *)s;
    unsigned char *str_dup;

    i =0;
    while (src[i] != '\0')
        i++;
    
    str_dup = (unsigned char *)malloc((i + 1) *sizeof(char));
    if (str_dup == NULL)
        return NULL;
    
    i = 0;
    while (str_dup != NULL && src[i] != '\0')
    {
        str_dup[i] = src[i];
        i++;
    }
    str_dup[i] = '\0';
    return ((char *)str_dup);
}
char **ft_strchr(char *s, int c)
{
    int i;
    int j,k,len;
    j = 0;
    i = 0;
    k = 0;
    len = 0;
    char *str1 = (char *)malloc(100*sizeof(char));
    int len_arr;

    len_arr = count(s, c) + 1;
    char **arr_str = (char **)malloc(len_arr * sizeof(char *));
    if (!arr_str)
        return NULL;
    while ( len <= len_arr)
    {
        while (s[i] != '\0')
        {
            if (s[i] == c)
            {
                while (i >= k)
                {
                    str1[j] = s[k];
                    j++;
                    k++;
                }
                arr_str[len] = ft_strdup(str1);
                free(str1);
            }    
            i++;
        }
        len++;
    free(arr_str);
    return (arr_str);
}
}


int main(void)
{
    char *s = "0hello0te0xinh0";
    char c = '0';

    int total_count = count(s, c);
    printf("total delimiter in the string: %d\n", total_count);
    char **str1 = ft_strchr(s, c);
    printf("result after the first cut: %s\n", str1[0] ); // the first cut
    // char *str2 = ft_strchr(str1, c);
    // printf("result after the second cut: %s\n", str2); //the second cut
    // char *str3 = ft_strchr(str2, c);
    // printf("the result after the third cut: %s\n", str3); //the third cut
    return (0);
}