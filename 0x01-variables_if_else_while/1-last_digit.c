#include <stdlib.h>

#include <time.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	int x = n % 10;

	if(x > 5){
		printf("Last digit of %d is %d, and is greater than 5" ,n ,m);
	
	}
	if(x == 0){
		printf("Last digit of %d is %d, and is 0" ,n ,m);
	}
	if(x < 6 && x != 0){
		printf("Last digit of %d is %d, and is less than 6 and not 0" ,n ,m);
	}
	return (0);

}
