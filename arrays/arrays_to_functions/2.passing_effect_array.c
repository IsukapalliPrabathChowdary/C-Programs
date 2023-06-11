#include<stdio.h>
void func(int val[]);
int main(){
        int i,arr[6]={1,2,3,4,5,6};
         printf("Contents of array are:");
        for(i=0;i<6;i++)
        {
                printf("%d ",arr[i]);
        }
        func(arr);
        printf("Contents of array are:");
        for(i=0;i<6;i++)
        {
                printf("%d ",arr[i]);
        }
return 0;
}   
void func(int val[])
{
    int sum=0,i;
    for(i=0;i<6;i++)
    {
    val[i]=val[i]*val[i];
    sum+=val[i];
    }
    printf("\nsum of squares = %d\n",sum);
}