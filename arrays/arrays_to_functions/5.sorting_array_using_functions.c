#include<stdio.h>
#define s 10
int sort_array(int arr[],int);
int main()
{
int n,i;
int arr[s];
int *p;
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
p=sort_array(&arr,n);

printf("Elements in array after sorting ascending order:");
for(i=0;i<n;i++)
{
printf("%d  ",*(p+i));
}
return 0;
}

int sort_array(int arr[],int n)
{
    int i,j,temp;
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
return arr;
}

