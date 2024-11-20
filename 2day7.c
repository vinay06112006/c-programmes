#include<stdio.h>
struct student
{
	int rollno;
	char grade;
	 struct exams
	 { int exam1marks;
	  int exam2marks;
	 }s2
}s1;
int main()
{ 
	s1.rollno = 25;
	s1.grade = "A";
	s1.s2.exam1marks = 20;
	s1.s2.exam2marks = 16;
	printf("%d",s1.s2.exam1marks);
}
