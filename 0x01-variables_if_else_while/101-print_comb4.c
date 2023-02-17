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
        for(n1 = '0'; n1 < '8'; n1++)
	{
		for(n2 = n1+1; n2<'9'; n2++)
		{
			for(n3 = n2+1; n3 <= '9'; n3++)
			{
				putchar(n1);
                                putchar(n2);
			        putchar(n3);
				if(n1 < '7')
				{
					putchar(',');
                                        putchar(' ');
                                }
			}

                }
        }
	putchar('\n');
        return 0;
}

