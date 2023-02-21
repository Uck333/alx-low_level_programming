#include <stdio.h>

/**
 * main - entry point
 * @nil variables declared
 *
 * Description: A program to print _putchar
 * Return: zero (success)
 */

/**
 * print_alphabet_x10 - function to print lowercase alpabets
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
