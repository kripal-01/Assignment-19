//Handling multiple Strings in C Language
//1. Write a program to find the number of vowels in each of the 5 strings stored in two 
//dimensional arrays, taken from the user.
#include<stdio.h>

int main()
{
	int i;
	char b[5][20];
	for(i=0;i<5;i++)
	gets(b[i]);
		int k,j,d;
	char c[10]="aeiouAEIOU";
	for(i=0;i<5;i++)
	{
		d=0;
		for(j=0;j<20;j++)
		{
			for(k=0;k<10;k++)
			{
				if(b[i][j]==c[k])
			d++;	
			}
			
		}
		printf("\n %d string contain %d vowels",i,d);	
	}

	return 0;
}

