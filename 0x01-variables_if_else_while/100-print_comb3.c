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
	int n1;
	int n2;
	for(n1='0';n1<'9';n1++)
	{
		for(n2=n1+1;n2<'9';n2++)
		{
			putchar(n1);
			putchar(n2);
			if(n1<'9')
			{
				putchar(',');
			        putchar(' ');
			}
		}
	}
	putchar('\n');
	return 0;
}
