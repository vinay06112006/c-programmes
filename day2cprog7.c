#include<stdio.h>
int main()
{
	int d,m,y;
	scanf("%d""%d""%d",&d,&m,&y);
	if (m==2 && ((y%4== 0&& y%100!=0)||y%400==0) && d>29)
		printf("invalid");
	else if (m==2 && !((y%4== 0&& y%100!=0)||y%400==0) && d>28)
		printf("invalid");
	else if(m<1||m>12)
		printf("invalid");
	else if ((m==1|| m==3||m==5||m==7|| m==8 || m==10 ||m ==12) && d>31)
		printf("invalid");
	else if (m==4||m==6||m==9||m==11 && d>30)
		printf("invalid");
	else if ((m==4||m==6||m==9||m==11)&& d==30)
		{d=1;
		m+=1;
		printf("the next day is %d %d %d",d,m,y);
		}
	else if ((m==1|| m==3||m==5||m==7|| m==8 || m==10) && d==31)
		{d=1;
		m+=1;
		printf("the next day is %d %d %d",d,m,y);
		}
	else if (m==12 && d == 31)
	{d=1;
	m=1;
	y+=1;
	printf("the next day is %d %d %d",d,m,y);
	}
	else if (m==2 && !((y%4== 0&& y%100!=0)||y%400==0) && d==28)
	{d=1;
		m+=1;
		printf("the next day is %d %d %d",d,m,y);
		}
	else if (m==2 && ((y%4== 0&& y%100!=0)||y%400==0) && d==29)
	{d=1;
	m+=1;
	printf("the next day is %d %d %d",d,m,y);
	}
	else
		{
		d+=1;
		printf("the next day is %d %d %d",d,m,y);}
	return 0;
}
