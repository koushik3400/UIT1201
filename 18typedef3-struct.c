

#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct student {
        char name[40];
        int roll_no;

    } it;
    // typedef struct student it;
    it it_b_2s;
    // struct student it_b_2s;
    strcpy(it_b_2s.name, "Siddarth");
    it_b_2s.roll_no = 2114;
    printf("%s's Roll Number is: %d\n", it_b_2s.name, it_b_2s.roll_no);
    return(0);
}