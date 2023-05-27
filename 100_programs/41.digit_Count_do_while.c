#include<stdio.h>
int digits(int n,int i)
{
    do
    {
     n=n/10;
     i++;   
    }
    while(n>0);
return i;
}
int main()
{
int n,i=0;
printf("Enter a number\n");
scanf("%d",&n);
printf("Number of digits in the given number is %d\n",digits(n,i));
return 0;
}
