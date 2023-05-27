#include<stdio.h>

int main()
{
int n;
int arr[16],i,j;
printf("Enter a decimal number : ");
scanf("%d",&n);
for(i=0;n>0;i++)
{
arr[i] = n%2;
n /=2;
}
printf("Binary number is : ");
for(j=i-1;j>=0;j--)
{
printf("%d",arr[j]);
}
return 0;
}
