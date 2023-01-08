#include "main.h"
/**
 * _abs - gives the absolute value
 * @n: input number as an integer
 * Return: the absolute value of int n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
