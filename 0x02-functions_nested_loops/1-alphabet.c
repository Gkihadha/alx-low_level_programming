<<<<<<< HEAD
#include "unistd.h"
=======
#include <main.h>
>>>>>>> d2af3451f558ea816a21caee9af123d2b14fac7e

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
