#include <stdio.h>

/**
 * main - nil to declare
 * @void - nil
 *
 * Description: c program for alpha
 * Return: nil if successful
 */
int main(void)
{
	int hexa;
	int dexa;

	for (hexa = '0'; hexa <= '9'; hexa++)
	{
		putchar(hexa);
	}
	for (dexa = 'a'; dexa < 'g'; dexa++)
	{
		putchar(dexa);
	}
	putchar('\n');
	return (0);
}
