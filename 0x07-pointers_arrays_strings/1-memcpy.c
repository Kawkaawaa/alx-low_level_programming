#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: to where copy the memory
 * @n: the number of bytes
 * @src: from where to copy the memroy area
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
