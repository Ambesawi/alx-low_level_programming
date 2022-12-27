
#include <stdio.h>

/**
 * print_buffer - prints string buffer
 * @b: buffer
 * @size: size f buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o = 0, i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02X", *(b + o + i));
			else
				printf(" ");
			if (i % 2)
				printf(" ");
		}
		
		for (i = 0; i < j; i++)
		{
			int c = *(b + o + i);

			if (c < 32 || c > 132)
				c = ',';
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
