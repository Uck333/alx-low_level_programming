#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - prints the name of the program
 * @n: represents the size/number of arguments passed to the fuction
 * @...: points to the array of strings constituting the arguements
 *
 * Description: A program that prints its own name
 * Return: always zero
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	int i;
	int sum = 0;

	va_start(a, n);

	if (n == 0)
		return (0);
	else
		for (i = n; (i > 0) || (i < 0); i++)
		{
			sum = sum + i;
		}
	va_end(a);
	return (sum);
}
