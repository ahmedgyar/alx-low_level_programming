#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print out the alphabet
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter < 123; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
