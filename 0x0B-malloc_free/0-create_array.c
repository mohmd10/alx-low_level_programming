#include <stdlib.h>
#include "holberton.h"

/**
* *create_array - function that creates an array of chars
* @size : size
* @c : Variable
* Return: Val char
*/

char *create_array(unsigned int size, char c)
{
	char *val;
	unsigned int i;

	val = malloc(sizeof(*val) * size);

	if (size == 0)
		return (NULL);

	if (val == NULL)
		return ('\0');

	for (i = 0 ; i < size ; i++)
	{
		val[i] = c;
	}

	return (val);
}
