#include <stdio.h>
#include <stdlib.h>

int random(int max)
{
	return rand() % max;
}

int main()
{
	printf("Hello World\n %d\n", random(10));
}
