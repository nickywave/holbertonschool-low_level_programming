#include <stdio.h>

/**
 * main - entry point of the program where the execution begins
 *
 * Return: Always 0 (Success)
 *
 **/

int main(void)

{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
