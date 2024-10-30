#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{printf("%d ",k);
		}
		k++;
		printf("\n");
	}
	return 0;
}
