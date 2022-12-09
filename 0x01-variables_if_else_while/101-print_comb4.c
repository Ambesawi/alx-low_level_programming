#include <stdio.h>
/**
 * main - prints all possible different combinations of digits
 * Return: Alway 0
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundres = '0';

	for (hundres = '0'; hundres <= '9'; hundres++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (tens == hundres) || (tens > ones) || (hundres > tens)))
				{
					putchar(hundres);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundres == '7' && tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
