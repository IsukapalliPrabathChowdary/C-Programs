//swapping without using third variable

#include<stdio.h>

int main(){
int a, b;
printf("Enter values of a and b\n");
scanf("%d%d",&a,&b);
printf("Entered values a=%d,b=%d",a,b);

a=a+b;
b=a-b;
a=a-b;
/*
a=a*b;
b=a/b;
a=a/b;*/
printf("swapped values of a=%d,b=%d\n",a,b);
return 0;
}