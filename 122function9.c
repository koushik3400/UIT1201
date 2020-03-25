#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 20
void init(int x[]);
void displayArr(int x[]);
void sortArr(int x[]);
int main()
{
	int intArr[LENGTH];
	init(intArr);
	displayArr(intArr);
	sortArr(intArr);
	displayArr(intArr);
	return(0);
}
void init(int x[])
{
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<LENGTH;i++)
    {
		x[i] = rand() % 200 + 1;
    }
}
void displayArr(int x[])
{
	int i;
	for(i=0;i<LENGTH;i++)
    {
		printf(" %4d",x[i]);
    }
	putchar('\n');
}
void sortArr(int x[])
{
	int i,j,t;
	for(i=0;i<LENGTH;i++)
		for(j=i+1;j<LENGTH;j++)
		{
			if( x[i] > x[j])
			{
				t = x[i];
				x[i] = x[j];
				x[j] = t;
			}
		}
}