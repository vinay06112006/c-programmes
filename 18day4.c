#include<stdio.h>
int main()
{
	int s,i,j,n,k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		printf(" ");
		for(j=0;j<i+1;j++)
		printf("%d ",k);
		printf("\n");
		k++;
	}
	return 0;
}
