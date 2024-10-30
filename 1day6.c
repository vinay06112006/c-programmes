#include<stdio.h>

int main()
{ int i,c=0;
	char ch[] = "hello world";
	for(i=0;ch[i]!= '\0';i++)
	c++;
	
	printf("length of the string is %d",c);
	return 0;
}
