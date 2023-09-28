#include "main.h"

/**
 * get_bit - bit to be gotten
 * @n: num
 * @index: number
 * Return: values of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int get;

	if (index > 63)
		return (-1);

	get = (n >> index) & 1;

	return (get);
}
