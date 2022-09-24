//5. Suppose we have a list of email addresses, check whether all email addresses have 
//‘@’ in it. Print the odd email out
#include<stdio.h>
int main()
{
	int i,j;
	// ye strchr(s1[i],'@')!=0 se bhe ho sakta h.
	char s1[3][20]={"kripal123","ankit123","akash@123"};
	for(i=0;i<3;i++)
	{
		int flag=0;
		for(j=0;s1[i][j];j++)
		{
			if(s1[i][j]=='@')
			{
				flag=1;
		    	break;
			}
			
		}
		if(flag!=1)
		printf("%s :  is odd email !\n",s1[i]);
		
	}

	return 0;
}
