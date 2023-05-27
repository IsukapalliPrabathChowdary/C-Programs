//swapping using third variable
#include<stdio.h>
int main(){
int a, b,temp;
printf("Enter values of a and b\n");
scanf("%d%d",&a,&b);
printf("Entered values a=%d,b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("swapped values of a=%d,b=%d\n",a,b);
return 0;
}