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
	printf("Hello World\n %d\n", random_int(10));
}
