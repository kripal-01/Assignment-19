//9. Write a program that asks the user to enter a username. If the username entered is 
//one of the names in the list then the user is allowed to calculate the factorial of a 
//number. Otherwise, an error message is displayed
#include<stdio.h>
#include<string.h>
#include<math.h>
void fact()
{
	int n,i,f=1;
	printf("enter no. u want to calculate factorial : ");
	scanf("%d",&n);
	for(i=n;i>=2;i--)
	f*=i;
	printf("factorial of a no. is  :   %d",f);
}
int main()
{
		int i;
	char a[4][10]={"kripal","ankit","ashish","alok"};
	char word1[10];
	printf("enter user name   :   ");
     gets(word1);
		for(i=0;i<4;i++)
	{
		if(strcmp(a[i],word1)==0)
	fact();
	
	}
return 0;
}
