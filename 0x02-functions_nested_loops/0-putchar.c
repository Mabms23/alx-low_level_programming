#include<stdio.h>
#include "_putchar.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	_putchar('/n');

	return (0);
}
