#include<stdio.h>
int main()
{
	int s,i,j,n;
	scanf("%d",&n);
	n=n/2;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{printf("*");
		}
		for(s=0;s<2*(n-i-1);s++)
		printf(" ");
			for(j=0;j<i+1;j++)
		{printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{printf("*");
		}
		for(s=0;s<2*i;s++)
		printf(" ");
		for(j=0;j<n-i;j++)
		{printf("*");
		}
		printf("\n");
	}
	return 0;
}
