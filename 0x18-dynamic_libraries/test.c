#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

/**
 * test - called func
 * @a: 1st var
 * @b: 2nd var
 *
 * Return: none
 */

int main(void)
{
	void test(int a, int b)
	{
		int c, d, e, f, g;
		c = a + b;
		d = a - b;
		e = a * b;
		f = a / b;
		g = a % b;
		
		_putint(c);
		_putint(d);
		_putint(e);
		_putint(f);
		_putint(g);
	}
	return (0);
}
