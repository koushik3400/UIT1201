#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int x;
	srand((unsigned)time(NULL));
	x = rand();
	printf("%d\n",x);
	return(0);
}

