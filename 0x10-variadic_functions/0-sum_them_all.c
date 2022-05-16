#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int index;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (index = 0; index < n; index++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
