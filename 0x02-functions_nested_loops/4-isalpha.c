#include "main.h"

/**
 * isalpha -checks for alphabets
 * @c: character to be cheked
 *
 * Return: 1 if character is a letter, 0 otherwise
 */
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
