
#include <stdio.h>
int x=64,y=8;
void add(void)
{
    extern int x,y;
    printf("%d\n", x/y);
}
int main()
{ 
    int x = 600;int y=300;   
    printf("%d\n", x/y);
    add();
    add();
    {
    extern int x,y;
    printf("%d\n", x-y);
    }
    x = 6;y=3;   
    printf("%d\n", x*y);
}