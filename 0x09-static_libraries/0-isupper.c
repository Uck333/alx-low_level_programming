#include "main.h"

/**
 * _isupper - function to check for uppercase
 * @c:variable int
 *
 * Description: checks uppercase
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	c = 'A';

	if (c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
