#include "main.h"

/**
 * print_numbers - function to check for uppercase
 * @void:nil
 *
 * Description: prints zero to nine
 * Return: non
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar (c);
	}
	_putchar ('\n');
}
