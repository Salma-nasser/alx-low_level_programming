#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * function that prints the last digit
 * Return 0 sucessfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int remain;
	remain=n%10;
	if (remain > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, remain);
	if (remain < 6 && remain != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, remain);
	if (remain == 0)
		printf("Last digit of %d is %d and is 0\n",n , remain);
	return (0);
}
