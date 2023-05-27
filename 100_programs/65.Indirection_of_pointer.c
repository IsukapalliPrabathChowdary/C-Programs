#include<stdio.h>
int main()
{
int *p1,*p2,*p3;
int a=5;
p1=&a,p2=&a,p3=&a;
printf("%d  %d  %d",*p1,*p2,*p3);
a=6;
printf("\n%d  %d  %d",*p1,*p2,*p3);
*p1=7;
printf("\n%d  %d  %d",*p1,*p2,*p3);
*p2=8;
printf("\n%d  %d  %d",*p1,*p2,*p3);
*p3=9;
printf("\n%d  %d  %d",*p1,*p2,*p3);


}