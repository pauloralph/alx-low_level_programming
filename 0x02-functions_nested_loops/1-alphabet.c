#include "main.h"

/**
 * print_alphabet _ prints lowercase alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		char c =a;

		_putchar(c);
		a++;
	}
	_putchar('\n');
}
