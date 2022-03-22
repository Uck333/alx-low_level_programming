#include "main.h"
#include <stdio.h>
/**
 * main - checks the code
 * @var - nil to declare
 *
 * swap_int: to swap two integers
 * Return: always nil
 */
void swap_int(int *a, int *b) {
	*a = 42;
	*b = 98;
}
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
