#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed betweem numbers
 * @n: number of inregers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
