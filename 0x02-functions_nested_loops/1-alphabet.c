#include "holberton.h"
/**
 * print_alphabet - prints but in lower case
 */
void print_alphabet(void)
{
	char ch;
	ch = a;
	while (ch <= z)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
