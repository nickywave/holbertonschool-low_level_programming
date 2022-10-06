#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point of the program where the execution begins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	/* n is the number */
	n = rand() - RAND_MAX / 2;
	/* a is the last digit */
	a = n % 10;

	/** first flag of print is the number [n] */
	/** second flag of print is the last digit [a] */
	printf("Last digit of %d is %d ", n, a);
	/** if the last digit is greater than 5 then print this */
	if (a > 5)
	{
		printf("and is greater than 5\n");
	}

	else if ((a < 6) && a != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	else
	{
		printf("and is 0\n");
	}

	return (0);
}
