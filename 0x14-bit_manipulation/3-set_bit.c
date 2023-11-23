#include "main.h"

/**
 * set_bit - sets the bit at the index
 * @n: the number
 * @index: the bit to sit
 *
 * Return: 1 if success, -1 on error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
