#include<stdio.h>
int main()
{
int m=1, n=100;
int i,add=m;
int arr[100];
printf("All the numbers between %d to %d : \n",m,n );
for(i=0;i<n;i++,m++)
{
arr[i]=m;
printf("%d ",arr[i]);
}
printf("\n\nEven number between 1 to 100: \n");

for( i=0;i<n;i++)
{
if(arr[i]%2==0)
{
	printf("%d ",arr[i]);
}
}

printf("\n\nOdd numbers between 1 to 100:  \n");
for(i=0;i<n;i++)
{
 if(arr[i]%2==1)
{
	printf("%d ",arr[i]);

}
}
printf("\n\nArray elemrnts with addition of 5\n");
for(i=0;i<n;i++,add++)
{
arr[i]=add+5;
printf("%d ",arr[i]);
}

return 0;
}
