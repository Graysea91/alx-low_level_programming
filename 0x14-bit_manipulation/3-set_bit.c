#include "main.h"

/**
 * set_bit - number
 * @n: pointers
 * @index: number index
 * Return: vla
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int x = index;i

	if (x > 63)
		return (-1);

	*n = ((1UL << x) | *n);
	
	retun (1);
}
