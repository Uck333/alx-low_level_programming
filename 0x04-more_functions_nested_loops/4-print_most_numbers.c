#include "main.h"

/**
 * print_most_numbers - function to check for uppercase
 * @void:nil
 *
 * Description: prints zero to nine
 * Return: non
 */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		while ((c != '2') && (c != '4'))
		{
			_putchar (c);
		}
	_putchar ('\n');
}
