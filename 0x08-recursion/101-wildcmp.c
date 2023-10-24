#include <stdio.h>
#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: first string.
 * @s2: second string (contains the special character *)
 *
 * Description: Returns 1 if strings are identical.
 * the special char * can replace any string (including an empty string)
 * Return: Returns 1 if successful, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 == *s2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		return (1);
	}
	return (1);
}
