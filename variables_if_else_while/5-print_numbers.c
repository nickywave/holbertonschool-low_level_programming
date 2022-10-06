#include <stdlib.h>
#include <stdio.h>

/**
 *main-entry point of the program where the execution begins
 *
 *Return: Always 0 (Success)
 *
 **/

int main(void)

{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
