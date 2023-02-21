#include <stdio.h>
/**
*main - entry point
*@fun - a function to print uppercase alphabets
*
*Description: a program to test functions
*Return: 0 (Success)
*/


/**
* fun - Prints alphabets
*/
char fun(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		fun();
	}
	return (0);
}
