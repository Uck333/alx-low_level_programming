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
	int n3;
	int n4 = '1';

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n3 = '0'; n3 <= '9'; n3++)
			{
				while (n4 <= '9')
				{
					putchar(n1);
					putchar(n2);
					putchar(' ');
					putchar(n3);
					putchar(n4);
					if (n2 < '8')
					{
						putchar(',');
						putchar(' ');
					}
					n4++;
				}
				n4 = n2 + 2;
			}
		}
	}
	putchar('\n');
	return (0);
}
