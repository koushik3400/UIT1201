#include <stdio.h>
int main()
{
    struct  student
    {
        int rn;
        char year;
        char *dept;
        char sec;
    }s1 = {10,'1',"IT", 'B'}, s2 = {21, '1', "BME", 'B' }, s3;
    
    s2.dept = "CSE";

    s3.rn = 30;
    s3.year = '4';
    s3.dept = "BME";
    s3.sec = 'C';

    printf("%s\n", s1.dept);
    printf("%s\n", s2.dept);
    printf("%d\n", s2.rn);
    printf("%s\n", s3.dept);

    return(0);
}