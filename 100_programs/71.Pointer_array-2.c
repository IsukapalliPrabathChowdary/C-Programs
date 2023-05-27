#include<stdio.h>

int main(){
int i,a[4]={1,2,3,4};
int *p[4];
for(i=0;i<4;i++)
    p[i]=&a[i];
for(i=0;i<4;i++)
{
    printf("p[%d]=%p\t",i,p[i]);
    printf("*p[%d]=%d\n",i,*p[i]);
}
return 0;
}