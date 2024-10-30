#include<stdio.h>
int main()
{
	int n,c;
	scanf("%d",&n);
	for(c=1;n/10!=0;c++)
	 n=n/10;
	printf("%d",c);
}
