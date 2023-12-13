#include "main.h"

/**
  * prnt_INT - prints an integer
  * @num: takes an integer value
  *
  * Return: number of integer
  */

int prnt_INT(int num)
{
	int postveNum;
	int strlen = 1, checker = 0; 
	static int count;

	count = 0;

	if (num == INT_MIN)
	{
		checker = INT_MIN;
		prnt_char('-');
		postveNum = INT_MAX;
		return (strlen += prnt_INT(postveNum));
	}
	else if (num < 0)
	{
		prnt_char('-');
		postveNum = -1 * num;
		strlen++;
	}
	else
		postveNum = num;

	if (postveNum / 10)
	{
		count++;
		strlen += prnt_INT((postveNum / 10));
		count--;
	}
	if (checker == INT_MIN && count == 0)
		prnt_char(((postveNum + 1) % 10) + '0');
	else
		prnt_char((postveNum % 10) +  '0');
	return (strlen);
}
