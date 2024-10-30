#include<stdio.h>
int main()
{
	int s,i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i;s++)
		printf(" ");
		if(i%2!=0)
		{
		for(j=0;j<i+1;j++)
		{printf("*");
		}}
		else 
		{for(j=0;j<i+1;j++)
		{printf("-");
		}}
		printf("\n");
		
	}
	n--;
	for(i=0;i<n;i++)
	{
		for(s=0;s<i+2;s++)
		printf(" ");
		if(i%2!=0)
		{
		for(j=0;j<n-i;j++)
		{printf("*");
		}}
		else 
		{for(j=0;j<n-i;j++)
		{printf("-");
		}}
		printf("\n");
	}
	return 0;
}
