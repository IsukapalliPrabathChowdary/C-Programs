#include<stdio.h>
#define ARRAY(arr,n)	int i=0;for( i=0;i<n;i++)\					
	printf("%d ",arr[i]);			
					
						
int main()
{
int arr[10]={10,20,30,40,50,60,70,80,90,100};

printf("Elements in array: ");
ARRAY(arr,5);
return 0;

}