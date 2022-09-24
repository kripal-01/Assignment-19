//8. Given a list of words followed by two words, the task is to find the minimum distance 
//between the given two words in the list of words.
//(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
// word1 = “the”, word2 = “fox”, OUTPUT : 2 )

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[4][10]={"my","name","is","kp"};
	char word1[]="name";
	char word2[]="kp";
	int i,w1=-2,w2=-2,min=1000;
	for(i=0;i<4;i++)
	{
		if(strcmp(a[i],word1)==0)
		w1=i;
		if(strcmp(a[i],word2)==0)
		w2=i;
		if(w1!=-2 && w2!=-2)
		min= abs(w2-w1);
		
	}
	printf("%d",min-1);
}
