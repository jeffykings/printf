#include "main.h"

/**
  * prnt_char - prints character
  * @c: character to be printed
  *
  * Return: 1 always
  */
int prnt_char(char c)
{
	if (c == '\0')
		return (0);
	write(1, &c, 1);

	return (1);
}
