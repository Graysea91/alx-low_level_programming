#include "main.h"

/**
 * clear_bit - ck=lear
 * @n: num
 * @index: numindex
 * Return: aokal
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int x = index;


	if (x > 63)
		return (-1);

	*n = (~(1UL << x) & *n)
	return (1);
}
