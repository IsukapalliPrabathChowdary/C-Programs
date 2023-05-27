#include<stdio.h>

int main(){
int a=20;
float b=3.12;
int *p1=&a;
float *p2=&b;
printf("Value of p1 = address of a = %p\n",p1);
printf("Value of a:%d\n",*p1);
printf("Value of p2 = address of b = %p\n",p2);
printf("Value of b:%f\n",*p2);
return 0;
}