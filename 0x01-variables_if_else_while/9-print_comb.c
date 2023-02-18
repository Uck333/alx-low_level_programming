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
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a < '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}

