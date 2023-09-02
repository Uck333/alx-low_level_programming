#include "main.h"
/**
 * _puts - checks the code
 * @str: nil to declare
 *
 * Return: zero
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
