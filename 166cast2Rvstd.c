#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int x;
	float srootX;
	printf("Enter an integer: ");
	scanf("%d",&x);
	// srootX = sqrt((unsigned)x);
	srootX = sqrt(abs(x));
	printf("The square root of %d is %.2f\n",x,srootX);
	return(0);
}

