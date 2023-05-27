#include<stdio.h>

int main(){
int a=10;
int *p=&a;
printf("Value of p = Address of a = %p\n",p);
printf("Value of p = Address of a = %p\n",++p);
printf("Value of p = Address of a = %p\n",p++);
printf("Value of p = Address of a = %p\n",p);
printf("Value of p = Address of a = %p\n",--p);
printf("Value of p = Address of a = %p\n",p--);
printf("Value of p = Address of a = %p\n",p);

return 0;
}