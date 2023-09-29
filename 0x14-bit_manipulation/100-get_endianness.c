#include "main.h"

/**
 * get_endianness - endianness
 * Return: Pointer
 */

int get_endianness(void)
{
	unsigned int v = 1;
	char *c = (char *) &v;


	return (*c);
}
