#include<stdio.h>
#include<string.h>
int main()
{
int i;
char s1[] = "this is a string";
char s2[] = "i am ironman";
int l1 = strlen(s1);
int l2 = strlen(s2);
if(l1>l2)
{
	for(i=0;i<l2+1;i++)
	{s1[i] = s2[i];
	}
	puts(s1);
	return 0;
}
}


