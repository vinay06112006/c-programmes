#include<stdio.h>
int main()
{
	int n=6,t,i,j,a[]={2,6,5,8,4,9},p,s;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
		}
	}
for(p=0;p<n;p++)
printf("%d ",a[p]);
printf("\n");
printf("max is %d\n",a[n-1]);
printf("min is %d\n",a[0]);
s = 0;
for(j=0;j<n;j++)
{s+=a[j];
}
printf("average is %d",s/n);
return 0;
}
