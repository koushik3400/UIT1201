#include <stdio.h>
#include <stdlib.h>
int main()
{  
    int *cMarks, i, nStud;
    float sum = 0.0;
    puts("How many students: ");
    scanf("%d", &nStud);
    cMarks = malloc(sizeof(int) * nStud);
    if (cMarks != NULL)
    {
        for ( i = 0; i < nStud; i++)
        {
            printf("Enter C Marks for stud%d: ",i);
            scanf("%d", cMarks+i);
        }
        puts("******************************");
        for ( i = 0; i < nStud; i++)
        {
            printf("C Marks for stud%d is %d\n",i, *(cMarks+i));
            sum += *(cMarks+i);
        }
        puts("******************************");
        printf("Average marks for C is %.2f\n", sum/nStud);
    }
    else
    {
        puts("Could not allot memory dynamically..");
       return(1);
    }
}