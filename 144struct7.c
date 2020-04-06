#include <stdio.h>
#include <string.h>
int main()
{
	struct info {
		int rNo;
		char dept[50];
		char sec;
	};
	struct student {
		struct info details;
		char name[80];
	};
	struct student s1[2];
    int i;
	s1[0].details.rNo = 66;
	strcpy(s1[0].details.dept,"IT");
	s1[0].details.sec = 'B';
    strcpy(s1[0].name,"Sandeep");

    s1[1].details.rNo = 67;
	strcpy(s1[1].details.dept,"CSE");
	s1[1].details.sec = 'A';
    strcpy(s1[1].name,"Pradeep");

    for (i = 0; i < 2; i++)
    {
        printf("Name: %s, Roll no.: %d, Dept.: %s, Sec.: %c\n",
			s1[i].name,
            s1[i].details.rNo,
            s1[i].details.dept,
            s1[i].details.sec
		  );
        
    }
	return(0);
}