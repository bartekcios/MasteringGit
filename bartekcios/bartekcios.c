#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int random(int max)
{
	return rand()%max;
}

int main()
{
	srand(time(NULL));
	printf("%d\n", random(10));
}
