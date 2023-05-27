#include<stdio.h>
#define s 5
void array();
int main()
{
int a1[s]={1,2,3,4,5};
int a2[s]={6,7,8,9,10};
array(a1);
array(a2);
return 0;
}
void array(int ar[])
{
int i,j,c;
printf("\nElements of array : ");
for(i=0;i<s;i++)
{
printf("%d  ",ar[i]);
}
printf("Reverse of array : ");
for(j=s-1;j>=0;j--)
{
c=ar[i];
ar[i]=ar[j];
ar[j]=c;
printf("%d ",ar[i]);
}
}
void swap(int br[])
{
int i,j,c;
printf("Reverse of array : ");
for(j=s-1;j>=0;j--)
{
c=br[i];
br[i]=br[j];
br[j]=c;
printf("%d ",br[i]);
}
}