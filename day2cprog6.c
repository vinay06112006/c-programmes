#include<stdio.h>
int main()
{int a,b,c;
printf("enter points for each bowling technique:\n");
scanf("%d""%d""%d",&a,&b,&c);
if (a>=b&&a>=c)
	printf("recomended bowling technique is %d",a);
else if(b>=a&&b>=c)
	printf("recomended bowling technique is %d",b);
else
	printf("recomended bowling technique is %d",c);
return 0;
}
