#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	char string[] = "_putchar";

	int n;

	while (n < 8)
	{
		_putchar(string[n]);
		++n;
	}
	_putchar('\n');
	return (0);
}
