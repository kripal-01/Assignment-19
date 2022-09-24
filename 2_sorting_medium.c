//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from 
//the user.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char a[10][50],t[50];
	for(i=0;i<10;i++)
	fgets(a[i],50,stdin);
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		if(strcmp(a[i],a[j])>0)
		{
			strcpy(t,a[i]);
			strcpy(a[i],a[j]);
			strcpy(a[j],t);
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%s ",a[i]);
	}
	return 0;
}
