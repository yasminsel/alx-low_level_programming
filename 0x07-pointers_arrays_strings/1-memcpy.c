#include "main.h"

/**
 * *_memset -  fills the first n bytes of the memory area
 * @n: integer
 * @s:string
 * @b: char
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
