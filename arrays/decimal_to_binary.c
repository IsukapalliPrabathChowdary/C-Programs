#include<stdio.h>
#define s 20
int main(){
int rem[s],i,j,num,temp;
printf("Enter a decimal number to convert binary:");
scanf("%d",&num);
temp=num;
for(i=0;num>0;i++)
{
    rem[i]=num%2;
    num=num/2;
}
printf("The binary number of %d is ",temp);
for(j=i-1;j>=0;j--)
{
    printf("%d",rem[j]);
}
return 0;
}