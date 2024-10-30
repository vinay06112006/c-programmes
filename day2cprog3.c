#include<stdio.h>
int main()
{
	float units_used,total_bill,sur_charge = 3,cpu = 2;
	printf("no.of units used :");
	scanf("%f",&units_used);
	total_bill = sur_charge + units_used*cpu;
	printf("total electricity bill is %f",total_bill);
	return 0;
	
}
