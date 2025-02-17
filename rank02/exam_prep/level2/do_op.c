#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int num1;
	int num2;
	char op;
	op = argv[2][0];
	if (argc != 4)
		write(1, "\n", 1);
	else
	{
		num1 = atoi((const char *)argv[1]);
		num2 = atoi((const char *)argv[3]);
		if (op == '+')
			printf("%d\n", num1 + num2);
		else if (op == '-')
			printf("%d\n", num1 - num2);
		else if (op == '*')
			printf("%d\n", num1 * num2);
		if (op == '/')
			printf("%d\n", num1 / num2);
		if (op == '%')
			printf("%d\n", num1 % num2);
	}
}
