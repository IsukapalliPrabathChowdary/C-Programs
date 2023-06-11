#include<stdio.h>
void check(int );
int main(){

        int arr[10],i;
        printf("Enter the array elements : ");
        for(i=0; i<10; i++)
        {
                scanf("%d",&arr[i]);
                check(arr[i]);
        }
return 0;
}
void check(int n)
{
    if(n%2==0)
        printf("%d is even\n",n);
    else
        printf("%d is odd\n",n);
}