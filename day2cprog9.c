#include<stdio.h>
int main()
{int a,b,c,d,e,p;
 scanf("%d""%d""%d""%d""%d",&a,&b,&c,&d,&e);
 p = (a+b+c+d+e)/5;
 printf("percentage is %d%% \n",p);
 if (p>=90)
  printf("the grade is A");
 else if (p>=80 && p<90)
	 printf("the grade is B");
 else if (p>=70 && p<80)
	 printf("the grade is C");
 else if (p>=60&&p<70)
 	printf("the grade is D");
 else if (p>=40 && p<60)
 	printf("the grade is E");
else
	printf("the grade is F");

return 0;
}
