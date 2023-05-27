/* 8.Biggest of three numbers using conditional operator. */
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter a b c values\n");
scanf("%d%d%d",&a,&b,&c);
d = a>b?(a>c?a:c):(b>c?b:c);
printf("Biggest value is %d\n",d);
return 0;
}
