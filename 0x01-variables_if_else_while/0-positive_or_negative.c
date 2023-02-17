#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio>
/* betty style doc for function main goes there */
/**
 * maiin - main function
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("Sd is positive", n);
	else if (n == 0)
		printf("Sd is zero", n);
	else
		printf("Sd is negative", n);
	printf ("\n");

	return (0);
}
