/* 57.Given an array of n integers where n>0, return an array of same size an input array where at every index of the output array should contain the product of all elements in the array except the element at the given index.
Example:
arr[] = {10, 4, 1, 6, 2}
prod[] = {48,120,480,80,240} */

#include<stdio.h>
#define s 5
int main()
{
int arr[s]={10,4,1,6,2};
int i,r=1;
printf("Elements in array : ");
for(i=0;i<s;i++)
printf("%d ",arr[i]);
for(i=0;i<s;i++)
{
r *=arr[i];
}
printf("\nElements in array after product excluding index element: ");
for(i=0;i<s;i++)
{
arr[i]=r/arr[i];
printf("%d ",arr[i]);
}
return 0;
}