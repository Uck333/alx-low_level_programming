#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - code for if and while loop
 * @i: nil
 *
 * Description: nil to declare
 * Return: if successful
 */
void positive_or_negative(int i)
{

	srand(time(0));

	i = rand() - RAND_MAX / 2;

	if (i > '0')
	{
		printf("%d is positive\n", i);
	}
	if (i == '0')
	{
		printf("%d is zero\n", i);
	}
	if (i < '0')
	{
		printf("%d is negative\n", i);
	}
}
