#include<stdio.h>
int main()
{
int s=1,n,i=1;
scanf("%d",&n);
while(i<=n)
{s*=i;
i++;
}
printf("%d",s);
return 0;
}
