#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *x;
	x = (float *)malloc(32 * sizeof(float));
	if( x == NULL)
		puts("Memory allocation failed..");
	else
		puts("Memory allocated for 32 floats..");
	return(0);
}

