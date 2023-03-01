#include "main.h"

/**
 * swap_int - checks the code
 * @a: nil to declare
 * @b: nil too
 *
 * Return: always nil
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
