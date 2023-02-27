#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
 * main - Entry
 * Return: Always 0
=======
 *  main - Entry
 *  Return: Always 0
>>>>>>> 615648d6660c757bd6c1e34e0a66f3470120dcd5
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
<<<<<<< HEAD
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d and is 0\n", n, a);

	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
=======

	if (a > 5)
	{
		printf("Last digit of %d is %d id greater than S\n", n,  a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d id greater than S\n", n,  a);
        }
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,a);
	}
	return (0);
>>>>>>> 615648d6660c757bd6c1e34e0a66f3470120dcd5
