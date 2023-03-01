#include "main.h"
#include <stdio.h>
/**
 * main - checks the code
 * @var - nil to declare
 *
 * puts_half: function to print half of a string
 * Return: always zero
 */
void puts_half(char *str)
{
	int length, charsToPrint = 0;

	while (*(str + length) != '\0')
		length++;
	if (!(length % 2)) /* if uneven number */
		charsToPrint = (length - 1) / 2;
	else
		charsToPrint = length / 2;
	charsToPrint++;
	while (charsToPrint < length)
		_putchar(*(str + charsToPrint++));
	_putchar('\n');
}

