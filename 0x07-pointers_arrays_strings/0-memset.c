#include "main.h"

/**
 * *_memset - fills memory
 * @s: pointer to point
 * @b: constant
 * @n: max bytes
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
