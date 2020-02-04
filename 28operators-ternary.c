#include <stdio.h>
int main()
{
    int x,y,max;
    printf("Enter x:\n");
    scanf("%d",&x);
    printf("Enter y:\n");
    scanf("%d",&y);
    max = (x>y) ? x : y;
    printf("Largest of %d and %d is: %d\n",x,y,max);
    return(0);
}