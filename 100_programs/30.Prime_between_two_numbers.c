//prime numbers between two ranges
#include<stdio.h>
int main(){
int num1,num2,count=0,i;
printf("Enter starting and ending range of numbers:");
scanf("%d%d",&num1,&num2);
for(i=num1;i<=num2;i++)
{
    
    for(int j=1;j<=i/2;j++)
    {
    if(i%j==0)
    count++;
    }
if(count<=1)
    printf("%d is prime number\n",i);
else
    printf("%d is not prime number\n",i);
    count=0;
}
return 0;
}