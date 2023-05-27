#include<stdio.h>
#define SIZE 10
int sum();
int main()
{
int arr[SIZE]={1,10,2,20,3,30,4,40,5,50};
int i;
printf("Elements in array are : ");
for(i=0;i<SIZE;i++)
{
printf("%d  ",arr[i]);
}
int s;
s=sum(arr,SIZE);
printf("\nsum of elements in array are : %d",s);
return 0;
}
int sum(int arr[],int n)
{
int i;
int sum = 0;
for(i=0;i<n;i++)
{
	sum =sum + arr[i];
}
return sum;
}
