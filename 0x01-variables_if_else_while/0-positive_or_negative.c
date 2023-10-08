#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty is the best for function main goes there */
/**
* main - main function
* Decription: Print negative or positive at the right conditions
* Return: always 0
*/

int main(void) {

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes here */


	printf("n is: %d \n", n);


	if (n > 0)

		printf("%d is positive\n", n);

	else if (n < 0)

		printf("%d is negative\n", n);

	else
		printf("%d is zero\n", n);


	return (0);
}

