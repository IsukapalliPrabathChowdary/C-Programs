//47.Finding biggest and smallest elements in array
#include<stdio.h>
int main()
{
int i, n=10,bn,sn,in=0,in1=0;
int arr[10];

printf("Enter 10  numbers\n");
for(i=0;i<n;i++)
{

scanf("%d",&arr[i]);
}
bn=sn=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>bn)
{
	bn=arr[i];
	in=i;
}
	if(arr[i]<sn)
{
	sn=arr[i];
	in1=i;
}
}
printf("The array elements are : \n");
for(i=0;i<n;i++)
{
	printf("%d\t",arr[i]);
}
printf("\nBiggest number:%d , It's Index: %d\n",bn,in);

printf("Smallest  number:%d ,Its'Index: %d\n",sn,in1);


return 0;
}

