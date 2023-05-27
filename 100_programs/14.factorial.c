#include<stdio.h>

int main(){
int num,factorial=1,n=1;
printf("Enter a number to find its factorial\n");
scanf("%d",&num);

if(num<0)
    printf("No factorial for negative number,try again!\n");
else if(num==0)
    printf("factorial for eneterd number %d is %d",num,num);
else{
    while(n<=num)
    {
        factorial*=n;
        n++;
    }
    printf("Factorial of entered number %d is %d",num,factorial);

    }

return 0;
}