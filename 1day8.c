#include<stdio.h>
int main()
{
	int i,j,n,p,k,l;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n][n];
		for(p=0;p<n;p++)
	{
		for(l=0;l<n;l++)
	 a[p][l]=0;
	}
	a[n/2][n-1] = 1;
	i = n/2;
	j= n-1;
	k=2;
	for(p=0;p<n*n;p++)
	{
		i-=1;j+=1;
		if(i==-1)
		i=n-1;
		if(j==n)
		j=0;
		if(i==-1&&j==n)
		{i=0;
		j=n-2;
		}
		if(a[i][j] != 0)
		{
			  i+=1;
			  j-=2;
		}
		a[i][j]=k++;	
	}
	for(p=0;p<n;p++)
	{
		for(l=0;l<n;l++)
		printf("%d ",a[p][l]);
		printf("\n");
	}
}
