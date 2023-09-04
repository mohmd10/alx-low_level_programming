#include <stdlib.h>
#include "holberton.h"

/**
* *_strdup - returns a pointer to a newly allocated space in memory
* @str : Pointer in
* Return: Copy of Pointer in
*/

char *_strdup(char *str)
{
	char *cop;
	int c, n = 0;

	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
	{
		n++;
	}
	n++;
	cop = malloc(sizeof(char) * n);

	if (cop == NULL)
		return (NULL);

	for (c = 0 ; str[c] != '\0' ; c++)
	{
		cop[c] = str[c];
	}

	return (cop);
}
