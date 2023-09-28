#include <stdio.h>
#include "main.h"

/**
 * print_binary - printing
 * @n: numbers 
 */
void print_binary(unsigned long int n)
{
	int x;
	int nex = 0;
	int nums;

	for (x = 63; x >= 0; x--)
	{
		nums = n >> x;
		if (nums & 1)
		{
			_putchar('1');
			nex++;
		}
		else if (nex)
			_putchar('0');
	}
	if (!nex)
		_putchar('0');
}
