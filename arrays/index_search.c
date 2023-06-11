#include<stdio.h>
#define SIZE 10
void search(int arr[]);
int main()
{
	int arr[SIZE]={1,10,2,20,3,30,4,40,5,50};
	int i,r;
	printf("The %d  elemnts in array: ",SIZE);
	for(i=0;i<SIZE;i++)
	{
	
	printf("%d  ",arr[i]);
	
	
	}
	search(arr);
	return 0;
}
	void search(int arr[SIZE])
	{
	int a,i;
	printf("\nEnter a number :\n");
	scanf("%d",&a);
	
	for(i=0;i<SIZE;i++)
	{
	if(arr[i]==a)
	
	printf("Index of element %d is :%d ",a,i);
		
	}

}

