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
			if (*format == 'c')
			{
				lenstr += prnt_char(va_arg(argp, int));
				format++;
			} else if (*format == 's')
			{
				lenstr += prntstrng(va_arg(argp, char *));
				format++;
			} else if (*format == '%')
			{
				lenstr += prnt_char('%');
				format++;
			}
			else
			{
				lenstr += prnt_char('%');
				lenstr += prnt_char(*format);
				format++;
			}
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
