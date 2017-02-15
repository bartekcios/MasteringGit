#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int max)
{
	return rand() % max;
}

int main()
{
	srand(time(NULL));
	printf("Hello World\n %d\n", random(10));
}
