//7. From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
int main()
{
	char ip[]="122.123.234.0";
	char *a= strtok(ip,".");
	while(a!=NULL)
	{
		int x=atoi(a);
		if(x>=0 && x<=255)
		printf("%d ",x);
		a=strtok(NULL,".");
	}
	
	return 0;
}


