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
	struct student s1[2]={
        {66,"IT",'B',"Sandeep"},
        {67,"CSE",'A',"Pradeep"}
    };
    int i;
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