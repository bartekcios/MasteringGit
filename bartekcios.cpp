#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int random(int max)
{
	return rand()%max;
}

int main()
{
	printf("%d\n", random(10));
}
