#include "main.h"
#include <stdio.h>

/**
 * _isalpha - to check for any_case characters
 * @c: Variable representing any_case characters
 *
 * Description: Program to check for lowercase
 * Return: One (1) if lowercase, 0 otherwise
 */

int _isalpha(int c)
{

	if ((c <= 'z') || (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
