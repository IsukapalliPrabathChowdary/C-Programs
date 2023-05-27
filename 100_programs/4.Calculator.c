//Calculator program using arthimetic operators
#include<stdio.h>

int main(){
int a,b;
printf("Enter a and b numbers:");
scanf("%d%d",&a,&b);
printf("<-----Arthimetic Operations----->\n");
printf("%d + %d = %d\n",a,b,a+b);
printf("%d - %d = %d\n",a,b,a-b);
printf("%d * %d = %d\n",a,b,a*b);
printf("%d / %d = %d\n",a,b,a/b);
printf("%d %% %d = %d\n",a,b,a%b);
return 0;
}