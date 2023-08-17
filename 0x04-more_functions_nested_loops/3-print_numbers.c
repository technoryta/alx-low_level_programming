#include "main.h"
#include "_putchar.c"

/**
  * print_numbers - Prints 0 to 9
  *
  * Return: Always 0
  */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
