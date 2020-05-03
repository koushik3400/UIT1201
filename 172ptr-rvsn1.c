#include <stdio.h>
int main()
{
    int x;
    x = 10;
    int *px;
    px = &x;
    printf("%p\n",px);
    printf("%d\n",*px);
    return (0);
}