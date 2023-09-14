#include "variadic_functions.h"
/**
* sum_them_all - Function to sum all number
* @n: number of iteration
* Return: sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int
	int add;
	va_list sum;

	va_start(sum, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		add += va_arg(sum, int);
	}
	return (add);
}
