#include "main.h"
/**
 * reverse_array - to concatenate two strings
 * @a: estimation string
 * @n: number string
 *
 * Return: always nil
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
