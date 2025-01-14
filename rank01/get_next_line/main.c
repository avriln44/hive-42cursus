#include "get_next_line.h"
#include <fcntl.h>

int main()
{
    int     fd;

    int     line_count = 0;

    fd = open("simple_file.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        return 1;
    }
	char    *line1 = get_next_line(fd);
	char *line2= get_next_line(fd);

    printf("Line 1: %s",line1);
    free(line1);
	printf("Line 2: %s",line2);
    free(line2);


    close(fd);
    return 0;
}