#include<stdio.h>
#define s 10
int main()
{
int i,j,temp,n;
int arr[s];

printf("Enter  numbers of elements\n");
scanf("%d",&n);
printf("Enter %d elements in array\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Elements in array:");
for(i=0;i<n;i++)
{
printf("%d  ",arr[i]);
}

//Sorting array
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
    if(arr[i]>arr[j])
    {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
    }
}

printf("Elements in array after sorting ascending order:");
for(i=0;i<n;i++)
{
printf("%d  ",arr[i]);
}
return 0;
}