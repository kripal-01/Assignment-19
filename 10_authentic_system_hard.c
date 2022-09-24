//10. Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
int main()
{
	
	char a[3][2][15]={{"kripal","123"},{"ankit","456"},{"alok","789"}};
	char un[]="ankit";
	char pw[]="456";
	int i,f=0;
	for(i=0;i<3;i++)
	{
		if((strcmp(un,a[i][0])==0) && (strcmp(pw,a[i][1])==0))
		{
			printf("login is successfull");
		f=1;
		}
	}
	if(f==0)
	printf("not match username and password");
	return 0;
	
}
