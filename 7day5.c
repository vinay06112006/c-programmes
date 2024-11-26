#include<stdio.h>
int main()
{
	int n,k,e;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter a value:");
		scanf("%d",&a[i]);
	}
	printf("enter the required element of array:");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{if(a[i]==e)
	k++;}
	if(k==0)
	printf("the element not belongs to this array");
	else
	printf("%d is repeated %d times in a array",e,k);
	return 0;
}