#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct  student
{
        int rn;
        char year;
        char dept[40];
        char sec;
};
struct student *createStrMem(void)
{
    struct student *s;
    s = malloc(sizeof(struct student));
    if (s != NULL)
    {
        return(s);
    }
    else
    {
        perror("Mem. for struct. student could not be allocated");
        exit(1);
    }
}
void fillStudentInfo(struct student *s) 
{
    s -> rn = 66;
    s -> year = '1';
    strcpy(s -> dept,"IT");
    s -> sec = 'B';
}
void showStudentInfo(struct student *s)
{
    printf("**************************\n");
    printf("Your roll number is: %d\n",s -> rn);
    printf("Your current year of college education is: %c\n",s -> year);
    printf("You belong to %s department\n",s -> dept);
    printf("You belong to \'%c\' section\n",s -> sec);
    printf("**************************\n");   
}
int main()
{
    struct student *st;
    st = createStrMem();
    fillStudentInfo(st);
    showStudentInfo(st);
    return(0);
}