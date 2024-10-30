#include<stdio.h>
#include<string.h>
int main(){
int l1,l2,i;
char s1[]= "hello world";
char s2[]= " jarvis";
l1 = strlen(s1);
l2 = strlen(s2);
for(i=l1;i<l1+l2+1;i++)
{s1[i]=s2[i-l1];
}
puts(s1);
return 0;
}
