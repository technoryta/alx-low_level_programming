#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 * @n: number of parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
