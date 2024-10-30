#include<stdio.h>
int main()
{
	int k=6,t,j,a[k],p,s;
	for(s=0;s<k;s++)
	scanf("%d",&a[s]);
		for(j=0;j<k-1;j+=2)
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
for(p=0;p<k;p++)
printf("%d ",a[p]);
}
