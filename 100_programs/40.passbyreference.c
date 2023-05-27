#include<stdio.h>
void swap_function(int* a,int* b);
int main(){
int a=2,b=4;
printf("Main function a=%d,b=%d\n",a,b);
swap_function(&a,&b);
printf("After swap function a=%d,b=%d",a,b);
return 0;
}
void swap_function(int* a,int* b)
{
int t;
t=*a;
*a=*b;
*b=t;
}