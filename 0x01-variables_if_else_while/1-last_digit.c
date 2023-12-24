#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - nil to declare
 * @void - nil
 *
 * Description: c program for alpha
 * Return: nil if successful
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = (n % 10);

	if (m > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	if (m  == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, m);
	}
	if ((m < 6) && (m != 0))
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
