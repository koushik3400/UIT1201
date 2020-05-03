//*, &, sizeof, NULL, size_t

#include <stdio.h>
int main()
{
    int x;
    x = 10;
    int *px;
    px = &x;
    // printf("%d\n", x);
    printf("%d\n", *px);
    // printf("%p\n",&x);
    printf("%p\n", px);
    printf("%lu\n",sizeof(x));
    return (0);
}