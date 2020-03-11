#include <stdio.h>
int main()
{
	int a[] = { 10, 20, 30, 40 };
	int b[4];
	int i;
	for(i=0;i<4;i++)
    {
		b[i] = a[i];
    }
    printf("a -> ");
	for(i=0;i<4;i++)
    {
		printf("%4d",a[i]);
    }
    printf("\nb -> ");
    for(i=0;i<4;i++)
    {
		printf("%4d",b[i]);
    }
    putchar('\n');
	return(0);
}
