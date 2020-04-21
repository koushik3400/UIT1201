#include <stdio.h>
int main()
{
    int x;
    puts("Enter an integer: ");
    scanf("%d",&x);
    printf("You entered: %.2f\n", (float)x);
    return(0);
}