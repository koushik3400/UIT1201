#include <stdio.h>
int main()
{
    int x,y;
    int *z;
    // x = 2000;
    // z = &x;
    // y = *z;
    // printf("%d\n%d\n",x,y);

    z = &x;
    *z = 3000;
    z = &y;
    *z = 4000;
    printf("%d\n%d\n",x,y);
    return (0);
}