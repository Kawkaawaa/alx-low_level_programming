#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space
 * in memory, which contains a copy of the string given
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string pr NULL if it fails or str = NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
