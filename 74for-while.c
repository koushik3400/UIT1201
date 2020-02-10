#include <stdio.h>

int main()
{
    int x,y;

    for(x=1;x<=10;x++)
    {
        printf("%d ",x);
    }
    putchar('\n');

    y = -20;
    while( y <= 20)
    {
        printf("%d ",y);
        y += 2;
    }
    putchar('\n');
    return(0);
}
