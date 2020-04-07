#include <stdio.h>
#include <string.h>
struct  student
{
        int rn;
        char year;
        char dept[40];
        char sec;
};
struct student fillStudentInfo(void) 
{
    static struct student s1;
    s1.rn = 66;
    s1.year = '1';
    strcpy(s1.dept,"IT");
    s1.sec = 'B';
    return(s1);
}
void showStudentInfo(struct student s)
{
    printf("**************************\n");
    printf("Your roll number is: %d\n",s.rn);
    printf("Your current year of college education is: %c\n",s.year);
    printf("You belong to %s department\n",s.dept);
    printf("You belong to \'%c\' section\n",s.sec);
    printf("**************************\n");   
}
int main()
{
    showStudentInfo(fillStudentInfo());
    return(0);
}