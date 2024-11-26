#include <stdio.h>

int main() {
int max,i;
int *arr = (int*)calloc(5,sizeof(int));
for(i+0;i<5;i++)
{scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
	if(arr[i] > max)
	{max = arr[i];
	}
}
printf("%d",max);

free(arr);
    return 0;
}