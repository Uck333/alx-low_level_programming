#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code for if and while loop
 * void - nil
 *
 * Description: nil to declare
 * Return: if successful
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if(n > 0)
        {
                printf( n, "is positive\n");
	}
	if(n =0)
	{
		printf( n, "is zero\n");
	}
	if(n < 0)
	{
		printf( n, "is negative\n");
	}
	return (0);
}
