#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a string...
 * @str: string to be duplicated
 *
 * Description: returns a pointer to a newly allocated 
 * space in memory, which contains a copy of 
 * the string given as a parameter
 * Return: pointer to the string if successful, Null otherwise.
 */

char *_strdup(char * str)
{
	char *duplicate;
	unsigned int i = 0;

duplicate = (char *) malloc(sizeof(str));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			duplicate[i] = str[i];
			i++;
		}
	}
	return (duplicate);
}

