#include <stdio.h>
int main()
{
    struct  student
    {
        int rn;
        char year;
        char dept[40];
        char sec;
    } s1;
    printf("Enter your Roll number: ");
    scanf("%d",&s1.rn);
    printf("Enter your current Year of study: ");
    scanf(" %c",&s1.year);
    printf("Enter your department: ");
    scanf("%s",s1.dept);
    printf("Enter your section: ");
    scanf(" %c",&s1.sec);
    printf("**************************\n");
    printf("Your roll number is: %d\n",s1.rn);
    printf("Your current year of college education is: %c\n",s1.year);
    printf("You belong to %s department\n",s1.dept);
    printf("You belong to \'%c\' section\n",s1.sec);
    printf("**************************\n");
    return(0);
}