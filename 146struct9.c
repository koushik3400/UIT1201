#include <stdio.h>
#include <string.h>
char *showDept(char d[])
{
    return(strcpy(d, "IT"));
}
int main()
{
    struct  student
    {
        int rn;
        char year;
        char dept[40];
        char sec;
    } s1;
    s1.rn = 66;
    s1.year = '1';
    s1.sec = 'B';
    printf("**************************\n");
    printf("Your roll number is: %d\n",s1.rn);
    printf("Your current year of college education is: %c\n",s1.year);
    printf("You belong to %s department\n",showDept(s1.dept));
    printf("You belong to \'%c\' section\n",s1.sec);
    printf("**************************\n");
    return(0);
}