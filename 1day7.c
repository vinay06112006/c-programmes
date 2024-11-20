#include<stdio.h>
#include<string.h>
int main()
{
	char ch[] = "hello";
	int i;
	int l = strlen(ch);
	int *p = ch;
	int chr[l+1];
	int arr[] = {p,p+1,p+2,p+3,p+4};
	for(i=0;i<l;i++)
		chr[i]=arr[l-i-1];
	for(i=0;i<l;i++)
		printf(*chr[i]);
}
