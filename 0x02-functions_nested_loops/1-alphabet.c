#include "main.h"

/**
*main - prints the alphabet in lowercase followed by a new line.
* Return: 0 always
**/
void print_alphabet(void)/*alphabet function*/
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
