#include "main.h"

/**
 * print_last_digit - prints the last digits
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
