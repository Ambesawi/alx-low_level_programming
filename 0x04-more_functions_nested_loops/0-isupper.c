#include "main.h"

/**
 * _isdigit - function that check if it's a digit
 * @c: takes in a character/digit
 * Return: 1 if digit and 0 if anything else
 */

int _isdigit(int c)
{
	if (c >= '65' && c <= '90')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
