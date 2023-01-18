#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code for Holberton School
 * @argc: argument count.
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] || get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = (*get_op_func(argv[2]))(a, b);

	printf("%d\n", res);
	return (0);
}
