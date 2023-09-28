#include "main.h"

/**
 * flip_bits - bits to flip
 * @n:  numbers of bits 1
 * @m: number bit 2
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, ne = 0;
	unsigned long int atn;
	unsigned long int pry = n ^ m;

	for (k = 63; b >= 0; b--)
	{
		atn = pry >> b;
		if (atn & 1)
			ne++;
	}
	return (ne);
}
