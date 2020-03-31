//(e.g. fn.: multiply a no. by 100)
#include <stdio.h>
void mul100(int *x)
{
    *x = *x * 100;
}
int main()
{
    int x;
    puts("Enter a number: ");
    scanf("%d",&x);
    mul100(&x);
    printf("%d\n",x);
    return(0);
}
