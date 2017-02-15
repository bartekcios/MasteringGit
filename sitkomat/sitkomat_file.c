#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function returnes random value less than max value
int random_int(int max)
{
	return rand() % max;
}

int main()
{
	srand(time(NULL));
	int sum = random(2) + random(10);
	if (sum > 6)
	{
		printf("sum of randoms higher than 6\n");
	}
	else
	{
		printf("sum of randoms lower or equals 6\n");
	}
}
