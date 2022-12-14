#include <stdio.h>
/**
 * main -main block
 * Description: computer and prints even number <4,000,000
 * 5 below 1024 (exclude), followed by a new l
 */

int main(void)
{
	int a = 0, b = 1, next = 0;
	int i = 0;

	while (next < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);
		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	printf('\n');
	return (0);
}
