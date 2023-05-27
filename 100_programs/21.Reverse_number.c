#include<stdio.h>
int main(){
 int num,input,digit,reverse_num=0;
 printf("Enter a number:\n");
 scanf("%d",&num);
 input=num;
 while(num>0)
 {
  digit=num%10;
  reverse_num= reverse_num*10 + digit;
  num=num/10;
 }
  printf("Reverse number of enterd number %d is %d\n",input,reverse_num);
  return 0;
}