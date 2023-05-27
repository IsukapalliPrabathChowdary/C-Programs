//10.odd or even without arthimetic or relational operator

#include<stdio.h>

int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
(n&1)?printf("Number %d is odd\n",n):printf("Number %d is even\n",n);
return 0;
}