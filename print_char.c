#include "main.h"

/**
  * prnt_char - prints character
  * @c: character to be printed
  *
  * Return: 1 always
  */
int prnt_char(char c)
{
	write(1, &c, 1);

	return (1);
}
