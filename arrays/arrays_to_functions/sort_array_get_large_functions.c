#include<stdio.h>
int get_largest(int *p,int );

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
printf("Largest array element in array:%d\n",bn);
}
int get_largest(int st,int end,int *p)
{
    if(*p>big)
    {
        big=*p;
    }
    return big;
}