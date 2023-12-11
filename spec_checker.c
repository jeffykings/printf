#include "main.h"

int spec_checker(char *format)
{
	int lenstr = 0;

	if (*format == 'c')
		return (lenstr += prnt_char(va_arg(argp, int)));
	else if (*format == 's')
		return (lenstr += prntstrng(va_arg(argp, char *)));
	else if (*format == '%')
		return (lenstr += prnt_char('%'));

	lenstr += prnt_char('%');
	return (lenstr += prnt_char(*format));
}
