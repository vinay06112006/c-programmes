#include<stdio.h>
int main()
{
	int n=6,t,i,j,a[]={2,6,-5,8,-4,9},p,s;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{if(a[j]<a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
		}
	}

for(p=0;p<n;p++)
printf("%d ",a[p]);
return 0;
}
