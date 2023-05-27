/*
Print the addresses of each element of the array using a pointer.
 using indirection operator , print the value stored in each element of the array.*/

#include<stdio.h>
int main()
{
int arr[10]={1,3,5,7,9,2,4,6,8,10};
int *ptr,i;
ptr= &arr[0];
    for(i=0;i<10;i++)
    {
    printf("\nAddress of index %d is %p",i,ptr+i);
    }
    printf("\nElements in array: ");
    for(i=0;i<10;i++)
    {
    printf("%d ",*(ptr+i));
    }
}