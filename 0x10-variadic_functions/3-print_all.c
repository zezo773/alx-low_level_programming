#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
char *check(char *s);

/** */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				printf("%s", check(va_arg(args, char *)));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
		}

		if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' || format[i] == 's' || format[i] == 'f'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

char *check(char *s)
{
	if (s)
		return (s);
	return ("(nil)");
}
