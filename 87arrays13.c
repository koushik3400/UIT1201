#include <stdio.h>

int main()
{
	int x[4] = { 10, 20, 30, 40 };
	int i;

	for( i=0; i<20; i++ )
		printf("Item %d: %d\n",i,x[i]);

	return(0);
}
