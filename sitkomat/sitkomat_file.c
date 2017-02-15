#include <stdio.h>
#include <stdlib.h>
#include <time.h>

<<<<<<< HEAD
// function returnes modulo value
=======
// function returnes modulo value in magic way
>>>>>>> 708c7caefcc330c20ef7e9a33ec43a3bd96aa83d
int modulo_int(int value1, int value2)
{
	int result = 0;
	if(2 == value2)
	{
		result = value1 & 1;
	}
	else
	{
		result = value1%value2;
	}

	return result;
}

// function returnes random value less than max value
int random_int(int max)
{
	return rand() % max;
}

void init_rand()
{
	srand(time(NULL));
}

int main()
{
	srand(time(NULL));
	int a = random_int(2);
	int b = random_int(10);
	int sum = a + b;
	int sub = b - a;
	printf("%d - %d = %d\n", b, a, sub);
	if (sum > 6)
	{
		printf("sum of randoms higher than 6\n");
	}
	else
	{
		printf("sum of randoms lower or equals 6\n");
	}
	
	printf("the fastest modulo counting in the world: %d\n", modulo_int(11, 2));
}
