#include "get_next_line.h"

int main()
{
    int     fd;
    char    *line;
    int     line_count = 0;

    fd = open("simple_file.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        return 1;
    }

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("\n%s", line);
        free(line);
    }

    close(fd);
    return 0;
}