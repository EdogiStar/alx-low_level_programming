#include "main.h"
#include <ctype.h>

/**
* _isupper - function that checks for uppercase characters
* @c: int type number
* Return: 1 if uppercase, else 0
*/
int _isupper(int c)
{
	int i = isupper(c);
	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
