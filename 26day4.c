#include<stdio.h>
int main()
{
	int i,j,n,l,s;
	scanf("%d",&n);
	
	for(i=0;i<n-1;i++)
	{for(l=0;l<i;l++)
	printf(" ");
	printf("*");
	for(j=0;j<2*(n-i-1)-1;j++)
	printf("-");
	printf("*");
	printf("\n");
	}
	for(s=0;s<n-1;s++)
	printf(" ");
	printf("*");
	return 0;
}
