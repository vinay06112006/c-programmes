#include<stdio.h>

float arr(int a[],int l){
	int i,s=0;
	float avg;
	for(i=0;i<l;i++)
	s+=a[i];
	avg = s/l;
	return avg;
}
int main()
{int i,l;
float x;

scanf("%d",&l);
int a[l];
for(i=0;i<l;i++)
scanf("%d",&a[i]);
x = arr(a,l);
printf("%f is the avg of elements of the array",x);
return 0;
}
