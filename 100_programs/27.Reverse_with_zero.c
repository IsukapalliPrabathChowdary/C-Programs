#include<stdio.h>
int main(){
 int num,f=0,digit,reverse_num=0;
 printf("Enter a number:\n");
 scanf("%d",&num);
 printf("Reverse number:");
 while(num>0)
 {
  digit=num%10;
  if(digit==0 && f==0)
        printf("0");
  reverse_num= reverse_num*10 + digit;
  num=num/10;
  f++;
 }
  printf("%d\n",reverse_num);
  return 0;
}