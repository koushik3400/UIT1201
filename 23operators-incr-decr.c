#include <stdio.h>
int main()
{
    int x,y;
    x=y=20;

    // printf("%d,%d\n",x,y);
    // x++;
    // y++;
    // printf("%d,%d\n",x,y);

    // printf("%d,%d\n",x++,y++);
    // printf("%d,%d\n",x,y);

    printf("%d,%d\n",++x,++y);
    printf("%d,%d\n",x,y);
    return(0);

}