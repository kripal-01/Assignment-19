//3. Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
int main()
{
	int i;
	char s1[6][20]={"kripal","ankit","akash","harsh","navanshi","vaibhav"};
	for(i=0;i<6;i++)
	printf("\n%s",s1[i]);
	return 0;
}
