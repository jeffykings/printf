#include "main.h"

/**
  * _printf - produces output according to a format.
  * @format:  is a character string
  *
  * Return: length of string
  */
int _printf(const char *format, ...)
{
	int lenstr = 0;
	va_list argp;

	va_start(argp, format);

	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				return (-1);
			lenstr += spec_checker(format);
			format++;
		}
		else
		{
			lenstr += prnt_char(*format);
			format++;
		}
	}
		va_end(argp);
		return (lenstr);
}
