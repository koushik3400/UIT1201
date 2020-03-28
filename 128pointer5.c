#include <stdio.h>
int main()
{
    int w,x,y,*z;
    w = 'W';
    z = &w;
    x = *z;
    z = &y;
    *z = 'Y';
    printf("%c\n%c\n%c\n",w,x,y);
    return(0);
}