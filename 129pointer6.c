//arrays and pointer (int and char arrays)
#include <stdio.h>
int main()
{
    // int test[] = {10,20,30,40,50};
    // int i;
    // int *tp;
    // tp = test;
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d\n",*(tp++));
    //     // tp++;
    // }
    // return(0);

    char test[] = {'1','2','3','4','5'};
    int i;
    char *tp;
    tp = test;
    printf("%s\n",tp);
    for (i = 0; i < 5; i++)
    {
        printf("%c\n",*(tp++));
        // tp++;
    }
    return(0);
}