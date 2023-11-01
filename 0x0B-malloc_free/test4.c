#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates strings...
 * @s1: destination string
 * @s2: appended string
 *
 * Description: returns a pointer to a new 
 * memory space containing containts of 
 * 2 strings concatenated to become one. 
 * Return: pointer to concatenated string if successful, Null otherwise.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, a = 1, b = 1;
	/*int k = 0;*/

	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	
	/*s1 = (char *) malloc((a) * sizeof(char));*/
	
	s2 = (char *) malloc((b) * sizeof(char));
	
	if ((s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}
	else
	{
		while(s1[i] != '\0')
		{
			i++;
		}
		while (s2[j] != '\0')
		{
			s1[i] = s2[j];
			i++;
			j++;
		}
		s1[i] = '\0';
		/*while (s1[k] != '\0')
		{
			two_str[k] = s1[k];
			k++;
		}
		two_str[k] = '\0';*/
		return (s1);
	}
	return (s1);
}
