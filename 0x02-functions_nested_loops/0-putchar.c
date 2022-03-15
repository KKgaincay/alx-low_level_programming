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

	for (n = 0; n < 8; n++)
	{
		_putchar(string[n]);
	}
	_putchar('\n');
	return (0);
}
