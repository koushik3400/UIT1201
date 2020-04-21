#include <stdio.h>
int main()
{
	int x,y;
	float z;
	x = 20; 
	y = 6;
	z = (float)x/y;
	printf("%d/%d = %.2f\n",x,y,z);
	return(0);
}