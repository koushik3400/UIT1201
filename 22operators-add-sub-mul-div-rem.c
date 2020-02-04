#include <stdio.h>
int main()
{
    int x,y;
    x = 33;
    y = 2;

    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d * %d = %d\n",x,y,x*y);
    printf("%d / %d = %f\n",x,y,(float)x/y);
    printf("%d %% %d = %d\n",x,y,x%y);
    return(0);
}