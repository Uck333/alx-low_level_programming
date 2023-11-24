#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the name of the program
 * @separator: represents the size/number of arguments passed to the fuction
 * @n: number of arguments passed
 * @...: points to the array of strings constituting the arguements
 *
 * Description: A program that prints its own name
 * Return: always zero
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *string;

	va_start(arg, n);

	if (separator == NULL)
		return;
	for (i = 0; i < (n - 1); i++)
	{
		string = va_arg(arg, char*);
		if (string == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s%s ", string, separator);
		}
	}
	if (i == (n - 1))
	{
		string = va_arg(arg, char*);
		printf("%s", string);
	}
	printf("\n");
	va_end(arg);
}
