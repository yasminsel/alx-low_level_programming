#include "function_pointers.h"

/**
 * array_iterator - maps an array
 * @array: the int array
 * @size: the array size
 * @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
