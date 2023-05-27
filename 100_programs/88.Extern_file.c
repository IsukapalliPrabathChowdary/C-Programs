#include<stdio.h>
extern int s;
extern void display();
int main(){
display();
display();
display();
printf("s=%d",s);
return 0;
}