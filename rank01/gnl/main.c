#include "get_next_line.h"
// #include <fcntl.h>

// // int main()
// // {
// // 	char *line;
// // 	int fd;

// // 	fd = open("simple_file.txt", O_RDONLY);
// //     if (fd == -1)
// //     {
// //         perror("open");
// //         return 1;
// //     }


// // 	while ((line = get_next_line(fd)) != NULL)
// // 	{
// // 		printf("%s", line);
// // 		ft_free(&line);
// // 	}
// // 	close(fd);
// // 	get_next_line(-1);
// // 	return 0;
// // }
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h> // for perror
#include <stdlib.h> // for ft_free

int main()
{
    char *line;
    int fd;

    fd = open("biible.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        return 1;
    }

    while ((line = get_next_line(fd)) != NULL)
    {
        write(1, line, ft_strlen(line)); // write to standard output
        free(line);
    }

    close(fd);
    return 0;
}
