#include<stdio.h>

int main(){
int a,b=5;
char c,d='d';
float e,f=2.3;

printf("Enter integer value:");
scanf("%d",&a);
printf("Enter a character:");
scanf(" %c",&c);
printf("Enter a decimal number:");
scanf("%f",&e);
printf("Integer values are %d,%d\n",a,b);
printf("Characters are %c,%c\n",c,d);
printf("Decimal values are %f,%f\n",e,f);
return 0;
}