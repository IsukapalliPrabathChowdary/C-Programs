#include<stdio.h>

int main(){
int num,count=0,i;
printf("Enter a number:");
scanf("%d",&num);
for(i=1;i<=num/2;i++)
{
    if(num%i==0)
    count++;
}
if(count<=1)
    printf("Entered number is prime number\n");
else
    printf("Entered number is not prime number\n");
return 0;
}