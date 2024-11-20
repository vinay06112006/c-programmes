#include<stdio.h>
int main()
{
	int i,j,p,q,m,n,k;
	printf("enter tha value of n:");
   scanf("%d",&n);
   int a[n][n];
   k=1;
   for(i=0;i<(n+1)/2;i++)
   {
   	for(j=i;j<=n-i-1;j++)
   	a[i][j]=k++;
   	for(p=i+1;p<=n-i-1;p++)
   	a[p][n-i-1] = k++;
   	for(q=n-i-1;q>=i;q--)
   	a[n-i][q]=k++;
   	for(m=i+1;m<=n-i-1;m++)
   	a[m][i] = k++;
   	
   }
   for(i=0;i<n;i++)
   {for(j=0;j<n;j++)
   printf("%d    ",a[i][j]);
   printf("\n");}
}
