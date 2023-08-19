#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char smalls;

	for (smalls = 'a'; smalls <= 'z'; smalls++)
	{
		putchar(smalls);
		putchar('\n');
	}

	return (0);
}
