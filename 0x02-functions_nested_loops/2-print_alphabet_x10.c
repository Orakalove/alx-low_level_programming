#include "main.h"
/**
 * print_alphabet_x10 - print 10times
 * Description - to print
 * Return: void
 */
void print_alphabet_x10(void)
{
	char j;
	int i;

	i = 0;

	while (i < 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}

