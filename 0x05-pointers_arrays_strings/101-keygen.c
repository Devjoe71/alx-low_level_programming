#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - generates random valid passwords
 *
 * Return: void
 */

int main(void)
{
	int p[100];
	int i, j, sum;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 78;
		sum += (p[i] + '0');
		putchar(p[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}
