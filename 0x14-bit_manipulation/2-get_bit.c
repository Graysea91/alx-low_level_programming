#include "main.h"
/**
 * get_bit - bit
 * @n: num
 * @index: number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int get;
	
	if (index > 63)
		return (-1)

	get = (n >> index) & 1;
	retun (get);
}
