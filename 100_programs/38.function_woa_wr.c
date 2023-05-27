//function without argument with return type
#include<stdio.h>
int sum();
int main(){
printf("%d\n",sum());
return 0;
}
int sum()
{
int a,b;
printf("Enter a and b values:\n");
scanf("%d%d",&a,&b);
return a+b;
}