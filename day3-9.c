#include<stdio.h>
int main()
{
	int i=0,j=1,k=3,s,n;
	scanf("%d",&n);
	if(n==1)
		printf("%d",0);
	else if (n==2)
		printf("%d",1);
	while(k<=n)
	{
		s=i+j;
		i=j;
		j=s;
		k++;
	}
	
	printf("%d",s);
}
