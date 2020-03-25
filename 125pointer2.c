#include <stdio.h>
int main()
{
    int a;
    int *b;
    a = 100;
    b = &a;
    printf("%p\n",&a);
    printf("%p\n",b);
    printf("%d\n",a);
    printf("%d\n",*b);
    return(0);
}