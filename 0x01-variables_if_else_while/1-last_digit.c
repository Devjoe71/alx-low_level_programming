#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints out the number is either greatre than 5, less than 6 or is 0
 *
 * Return: in our case here it will return 0
 */

int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	k = n % 10;
	if (k > 5)
		printf("Last digit of %d is %d and is greater than 5", n, k);
	else if (k == 0)
		printf("Last digit of %d is %d and is 0", n, k);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, k);
	printf("\n");
	return (0);
}
