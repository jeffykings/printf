#include "main.h"

/**
  * prntstrng - prints string
  * @str: string to be printed
  *
  * Return: string length
  */
int prntstrng(char *str)
{
	int lenstr;

	for (lenstr = 0; str[lenstr] != '\0'; lenstr++)
	{
	}

	write(1, str, lenstr);

	return (lenstr);
}
