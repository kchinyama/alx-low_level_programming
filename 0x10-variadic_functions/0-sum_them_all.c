#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters inside the function.
 * @...: A variable number of paramters in the function.
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list kc;
	unsigned int i, sum = 0;


	va_start(kc, n);


	for (i = 0; i < n; i++)
		sum += va_arg(kc, int);


	va_end(kc);

	return (sum);
}
