#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str;
	/** const char t_arg[] = "cifs"; */
	va_list list;
	va_start(list, format);
	
	i = 0;
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), n++;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), n++;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), n++;
				break;
			case 's':
				str = va_arg(list, char *);
				break;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(list);
}
