#include "main.h"
#include <string.h>
/**
 * binary_to_uint - convert to unsigned
 * @b:  pointer
 * Return: value
 */
unsigned int binary_to_uint(const char *b)
{
	int des = 0;
	int lent = strlen(b), i;
	int based = 1;

	if (b == NULL)
		return ((size_t)(NULL));

	for (i = lent - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				des += based;
			}
			based *= 2;
		}
		else
		{
			return (0);
		}

	}
	return (des);
}
