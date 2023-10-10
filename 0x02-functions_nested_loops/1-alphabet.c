#include "main.h"

/**
 * main - check the code
 *Descriptin:  Write a function that prints the alphabet, in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch = 'z'; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	}
}
