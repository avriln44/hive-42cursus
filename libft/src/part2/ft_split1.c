#include <stdio.h>
#include <stdlib.h>

int count(const char *s, int c) {
    int count = 0;
    while (*s) {
        if (*s == c)
            count++;
        s++;
    }
    return count;
}

char *ft_strdup(const char *src) {
    int i = 0;
    while (src[i] != '\0')
        i++;
    
    unsigned char *str_dup = (unsigned char *)malloc((i + 1) * sizeof(char)); // +1 for null terminator
    if (str_dup == NULL)
        return NULL;

    i = 0;
    while (src[i] != '\0') {
        str_dup[i] = src[i];
        i++;
    }
    str_dup[i] = '\0';
    return (char *)str_dup;
}

char **ft_strchr(char *s, int c) {
    int i = 0, j = 0, k = 0, len = 0;
    int len_arr = count(s, c) + 1;
    char **arr_str = (char **)malloc(len_arr * sizeof(char *));
    
    if (!arr_str) return NULL;

    while (len < len_arr) {
        j = 0;
        char *str1 = (char *)malloc(100 * sizeof(char));
        if (!str1) return NULL;

        while (s[i] != '\0' && s[i] != c) {
            str1[j++] = s[i++];
        }
        str1[j] = '\0';
        
        arr_str[len++] = ft_strdup(str1);
        free(str1);

        while (s[i] == c)
            i++;  // Skip the delimiter
    }
    return arr_str;
}

int main(void) {
    char *s = "0hello000te0xinh0";
    char c = '0';

    int total_count = count(s, c);
    printf("Total delimiters in the string: %d\n", total_count);
    
    char **str_arr = ft_strchr(s, c);
    for (int i = 0; i <= total_count; i++) {
        printf("Substring %d: %s\n", i, str_arr[i]);
        free(str_arr[i]);
    }
    free(str_arr);

    return 0;
}