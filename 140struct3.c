#include <stdio.h>
int main()
{
    struct  student
    {
        int rn;
        char year;
        char *dept;
        char sec;
    }s1, s2, s3;
    
    s1.rn = 10;
    s1.year = '1';
    s1.dept = "IT";
    s1.sec = 'B';

    s2.rn = 20;
    s2.year = '2';
    s2.dept = "CSE";
    s2.sec = 'A';

    s3.rn = 30;
    s3.year = '4';
    s3.dept = "BME";
    s3.sec = 'C';

    printf("%s\n", s1.dept);
    printf("%s\n", s2.dept);
    printf("%s\n", s3.dept);

    return(0);
}