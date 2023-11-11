#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the name of the program
 * @separator: represents the size/number of arguments passed to the fuction
 * @n: number of arguments passed
 * @...: points to the array of strings constituting the arguements
 *
 * Description: A program that prints its own name
 * Return: always zero
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	va_start(arg, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		sum = va_arg(arg, int);
		if ((sum <= 0) || (sum > 0))
		{
			printf("%d, ", sum);
		}
	}
	printf("\n");
	va_end(arg);
}
