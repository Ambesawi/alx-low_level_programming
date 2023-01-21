#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

/**
 * struct funckey - a key for picking functions to use for printing
 * @f: function to use for printing
 * @spec: character specifier
 */
typedef struct funckey
{
	void (*f)(va_list);
	char spec;
} funckey;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
