#include<stdio.h>
#include<string.h>
union student{
    int a;
    float b;
    char c[20];
}s1;
int main(){
s1.a=20;
printf("id=%d\n",s1.a);
s1.b=20.45;
printf("serial:%f\n",s1.b);
strcpy(s1.c,"c programming");
printf("Name:%s\n",s1.c);
return 0;
}