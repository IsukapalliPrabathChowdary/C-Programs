//11.Check equality of two numbers without arithmetic or relaional operator

#include<stdio.h>

int main(){
int a,b;
printf("Enter a,b numbers\n");
scanf("%d%d",&a,&b);
((a^b)==0)?printf("Both numbers are same\n"):printf("Numbers are different\n");
return 0;
}