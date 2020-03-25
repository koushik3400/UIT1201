#include <stdio.h>
int main()
{
    int a;
    int *b;
    b = &a;
    printf("%p\n",&a);
    printf("%p\n",b);
    return(0);
}