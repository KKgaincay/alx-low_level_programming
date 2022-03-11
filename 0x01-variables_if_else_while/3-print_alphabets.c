#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	i = 'A';

	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (i);
}
