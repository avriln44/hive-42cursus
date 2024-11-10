#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
int main(void)
{
    char c = 'a';
    ft_putchar_fd(c, 2); //c to be output to standard output
    write(1, "\n", 1);
    // ft_putchar_fd(c, 2); // c to be output to standard error
    return (0);
}