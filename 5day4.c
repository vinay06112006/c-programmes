#include<stdio.h>
int main()
{
	int s,i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i;s++)
		printf(" ");
		for(j=0;j<2*i+1;j++)
		{printf("*");
		}
		printf("\n");
	}
	return 0;
}
