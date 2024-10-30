#include<stdio.h>
int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{k=65;
		for(j=0;j<i+1;j++)
		{printf("%c ",k);
		k++;}
		
		printf("\n");
	}
	return 0;
}
