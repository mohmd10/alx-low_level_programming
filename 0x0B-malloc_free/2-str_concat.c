#include <stdlib.h>
#include "holberton.h"

/**
* *str_concat - function that concatenates two strings.
* @s1 : Pointer 1 string of in
* @s2 : Pointer 2 string of in
* Return: empty - NULL
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s1i = 0, s2i = 0, n = 0, c, c1;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[s1i] != '\0')
	{
		s1i++;
	}

	while (s2[s2i] != '\0')
	{
		s2i++;
	}
	s2i++;

	n = s1i + s2i;

	concat = malloc(sizeof(char) * n);

	if (concat == NULL)
		return (NULL);

	for (c = 0 ; c < s1i ; c++)
	{
		concat[c] = *s1;
		s1++;
	}
	for (c1 = 0 ; c1 < s2i ; c1++)
	{
		concat[s1i + c1] = *s2;
		s2++;
	}

	return (concat);
}
