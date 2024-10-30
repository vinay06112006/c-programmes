#include<stdio.h>
int main()
{
	int n=6,t,i,j,a[n],k,s,p;
		for(s=0;s<n;s++)
	   scanf("%d",&a[s]);
	   
	scanf("%d",&k);
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
printf("k th largest is %d\n",a[n-k]);
printf("k th min is %d\n",a[k-1]);
return 0;
}
