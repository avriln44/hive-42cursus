#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    int i;
    unsigned char *src = (unsigned char *)s;
    unsigned char *str_dup;

    i =0;
    while (src[i] != '\0')
        i++;
    
    str_dup = (unsigned char *)malloc(i *sizeof(char));
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

int main(void)
{
    char s[] = "te xinh";
    char *dup = ft_strdup(s);

    if (dup != NULL)
    {
        printf("%s\n", dup);
        free(dup);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}