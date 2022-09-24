//6. Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>

int main()
{
	int i,flag=0;
	char c[5][10]={"pune","bhopal","agra","bhopal","pune"};
	
	int j,s=0;
		for(i=0;i<=2;i++)
	{
		for(j=4;j>=2;j--)
		{
		
		if(c[i]==c[j])
			flag=i;
		else
		break;
		
	    }
    }  


	if(c[i]>c[j])
	printf("string is palindrome ");
	else
	printf("string is not palindrome ");
	return 0;
}

