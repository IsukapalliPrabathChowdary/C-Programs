
#include<stdio.h>
int large_num(int *,int);
int small_num(int *,int);
int main()
{
int i,bn,sn,n;
int arr[10];

printf("Enter  numbers of elements\n");
scanf("%d",&n);
printf("Enter %d elements in array\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

bn=sn=arr[0];

for(i=0;i<n;i++)
{
	bn=large_num(&arr[i],bn);
}
for(i=0;i<n;i++)
{
    sn=small_num(&arr[i],sn);
}
printf("The array elements are : \n");
for(i=0;i<n;i++)
{
	printf("%d\t",arr[i]);
}
printf("\nBiggest number:%d\n",bn);
printf("Smallest  number:%d\n",sn);
return 0;
}

int large_num(int *p,int big)
{
    if(*p>big)
    {
        big=*p;
    }
    return big;
}

int small_num(int *p,int small)
{
    if(*p<small)
    {
        small=*p;
    }
    return small;
}

int get_index()