#include<stdio.h>
int main()
{
	float total_profit,salary,da,hra;
	printf("enter the total profit of company:");
	scanf("%f",&total_profit);
	if (total_profit >= 10000)
		{
		da = 0.2;
		hra = 0.1;}
	else if (total_profit < 10000 && total_profit >= 5000)
		{
		da = 0.15;
		hra = 0.075;
	}
	else
		{
		da = 0.1;
		hra = 0.05;}
salary = total_profit*(1+da+hra);
	printf("salary is %f",salary);
	return 0;
	  
}
