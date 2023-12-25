#include "main.h"

/**
 * *_memcpy - copies  the first n bytes of the memory area
 * @dest: memory size
 * @src: source
 * @n: length of src
 * Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
