#include<stdio.h>
int main()
{
	int d,m,y;
	scanf("%d""%d",&m,&y);
	if (m==2 && ((y%4== 0&& y%100!=0)||y%400==0))
		printf("no.of days %d",d=29);
	else if (m==2 && !((y%4== 0&& y%100!=0)||y%400==0))
		printf("no.of days %d",d=28);
	else if(m<1||m>12)
		printf("invalid");
	else if ((m==1|| m==3||m==5||m==7|| m==8 || m==10 ||m ==12))
		printf("no.of days %d",d=31);
	else 
		printf("no.of days %d",d=30);
	return 0;
}
	
