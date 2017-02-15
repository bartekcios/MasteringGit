#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	init_rand();
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
}
