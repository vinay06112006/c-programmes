#include <stdio.h>
int main()
{
	int a=10,b=20,t;
    t = a;
    a = b;
	b = t;
	printf("a,b are %d %d",a,b);
	return 0;
	
}
