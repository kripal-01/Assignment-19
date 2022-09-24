//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char a[2][10];
	for(i=0;i<2;i++)
	fgets(a[i],10,stdin);
	for(i=0;i<2;i++)
	{
	
		if(strcmp(a[i],"kripal")==0)
		{
			printf("string found");
			break;
		}
	}
	
	return 0;
}
