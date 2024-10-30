#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if ((year%4 == 0 && year%100!=0)||year%400 == 0)
		printf("the %d is a leap year",year);
	else
	printf("the %d is not a leap year",year);
	return 0;
}
