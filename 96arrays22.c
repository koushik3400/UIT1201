#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 15
int main()
{
	int digits[LENGTH];
	int i,j,k,t;

	srand((unsigned)time(NULL));
	for(i=0;i<LENGTH;i++)
		digits[i] = rand() % 200 + 1;


	
	for(i=0;i<LENGTH;i++)
    {
		printf(" %4d",digits[i]);
    }
	putchar('\n');


	for(j=0;j<LENGTH;j++)
    {
		for(k=j+1;k<LENGTH;k++)
		{
			if( digits[j] < digits[k])
			{
				t = digits[k];
				digits[k] = digits[j];
				digits[j] = t;
			}
		}
    }


	
	for(i=0;i<LENGTH;i++)
    {
		printf(" %4d",digits[i]);
    }
	putchar('\n');

	return(0);
}