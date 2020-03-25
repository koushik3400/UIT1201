#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randomNumbers(int x[]);
int main()
{
	int i;
	int arr[20];
	randomNumbers(arr);
	for(i=0;i<20;i++)
    {
		printf(" %4d",arr[i]);
    }
	putchar('\n');
	return(0);
}
void randomNumbers(int x[])
{
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<20;i++)
    {
		x[i] = rand() % 200 + 1;
    }
}