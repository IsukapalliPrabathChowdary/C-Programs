#include<stdio.h>

int reverse(int n)
{

    int r=0,rem;
    while(n>0)
    {
    rem=n%10;
    r=r*10+rem;
    n=n/10;
    }
    return r;
}
int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
printf("reverse number is %d",reverse(num));

return 0;
}