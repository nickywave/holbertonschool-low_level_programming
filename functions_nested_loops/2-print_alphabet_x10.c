#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 **/
void print_alphabet_x10(void)
{
	int y;
for (y = 1 ; y <= 10 ; y++)	
{
        int n;

        for (n = 'a'; n <= 'z'; n++)
        {
                _putchar(n);
        }
        _putchar('\n');
}
}
