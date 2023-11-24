#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints the name of the program
 * @format: represents the size/number of arguments passed to the fuction
 * @...: points to the array of strings constituting the arguements
 *
 * Description: A program that prints its own name
 * Return: always zero
 */

void print_all(const char * const format, ...)
{
	const char *pointer_to_format = format;
	va_list args;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);

	while (*pointer_to_format)
	{
		if (*pointer_to_format == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (*pointer_to_format == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*pointer_to_format == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (*pointer_to_format == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		pointer_to_format++;
		if (*pointer_to_format)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
