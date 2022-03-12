/**
 * main - nothing to declare
 * @void - nil
 *
 * Description: prints sizes of..based on the computer
 * Return: zero is successful
 */

#include <stdio.h>

int main(void)

{
	 char c;
        int I;
        long int l;
        long long int m;
        float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
        printf("Size of an int: %lu.\n", (unsigned long)sizeof(I));
        printf("Size of a long int: %lu.\n",(unsigned long)sizeof(l));
        printf("Size of a long long int: %lu.\n",(unsigned long)sizeof(m));
        printf("Size of a float: %lu.\n",(unsigned long)sizeof(f));

	return (0);
}
