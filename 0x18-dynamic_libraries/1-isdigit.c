#include "main.h"

/**
 * _isdigit - function to check for uppercase
 * @c:variable int
 *
 * Description: checks uppercase
 * Return: 1 if uppercase 0 otherwise
 */

int _isdigit(int c)
{
	c = '0';

	if (c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
