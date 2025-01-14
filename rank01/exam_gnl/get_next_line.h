#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

char	*get_next_line(int fd);
void	ft_update_buffer_and_line(char *buffer, char *new_line_in_line);
char	*ft_read_line(int fd, char *line, char *buffer);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *source);
char	*ft_strcpy(char *destination, char *source);
char	*ft_strchr(char *string, int character);
size_t	ft_strlen(char *string);
char	*ft_substr(char *s, int start, int end);

#endif