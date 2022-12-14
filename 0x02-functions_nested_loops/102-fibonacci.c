#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always (0).
 */

int main(void)
{
	int i;
	int a, b, c;

	b = 1, c  = 0;

	for (i = 0; i < 50; i++)
	{
		a = b + c;
		printf("%i", a);

		c = b;
		b = a;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
