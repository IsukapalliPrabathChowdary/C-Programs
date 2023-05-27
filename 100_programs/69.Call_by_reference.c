#include<stdio.h>
void ref(int *p,int *q);
int main(){
int a=10,b=20;
printf("a=%d,b=%d\n",a,b);
ref(&a,&b);
printf("a=%d,b=%d\n",a,b);
return 0;
}
void ref(int *p, int *q)
{
    (*p)++;
    (*q)++;
    printf("*p=%d,*q=%d\n",*p,*q);
}