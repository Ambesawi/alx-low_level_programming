#include <stdio.h>
/**
 * main - main block
 * Description: computer and prints even number <4,000,000
 * 5 below 1024 (exclude), followed by a new l
 */
int main(void)
{
	unsigned long fib, prevFib, prev2Fib;
	float sum;

	prevFib = 1;
	prev2Fib = 0;
	while (1)
	{
		fib = prevFib + prev2Fib;
		if (fib > 4000000)
			break;
		if ((fib % 2) == 0)
			sum += fib;
		prev2Fib = prevFib;
		prevFib = fib;
	}

	printf("%.0f\n", sum);
	return (0);
}
