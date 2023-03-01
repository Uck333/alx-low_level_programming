#include "main.h"
#include <stdio.h>
/**
 * main - checks the code
 * @var - nil
 *
 * print: prints a string in reverse
 * Return: zero
 */
void print_rev(char *s)
{
	int counter, strLength;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	strLength = counter;
	counter = 0;
	while (*(s + counter) != '\0')
		_putchar(*(s + (strLength - (counter++ + 1))));
	_putchar('\n');
}
