#include<stdio.h>

int main(){
int a,b;
printf("Enter 2 values\n");
scanf("%d%d",&a,&b);
printf("Bitwise AND of %d and %d is %d\n",a,b,a&b);
printf("Bitwise OR of %d and %d is %d\n",a,b,a|b);
printf("Bitwise XOR of %d and %d is %d\n",a,b,a^b);
printf("Compliment of %d is %d\n",a,~a);
printf("Compliment of %d is %d\n",b,~b);
printf("Value of a after left shifting:%d\n",a<<1);
printf("Value of b after left shifting:%d\n",b<<1);
printf("Value of a after left shifting:%d\n",a>>1);
printf("Value of b after left shifting:%d\n",b>>1);
return 0;
}