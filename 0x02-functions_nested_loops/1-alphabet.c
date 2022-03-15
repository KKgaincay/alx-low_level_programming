#include "main.h"
/**
 * main - Entering point
 *
 * print_alphabet - prints all alphabets in lowercase.
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		_putchar(a);
	}
	_putchar('\n');

}
