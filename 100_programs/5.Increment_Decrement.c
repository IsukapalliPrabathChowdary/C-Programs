#include<stdio.h>

int main(){
int a=3;
printf("a=%d\n",a++);
printf("a=%d\n",a);
printf("a=%d,a=%d\n",++a,a++);
printf("a=%d\n",a);
printf("a=%d\n",a--);
printf("a=%d\n",a);
printf("a=%d,a=%d\n",--a,a--);
printf("a=%d\n",a);
return 0;
}