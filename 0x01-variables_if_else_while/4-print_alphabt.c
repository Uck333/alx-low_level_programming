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
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha != 'e') && (alpha != 'q'))
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
