//factorial function without argument and without return
#include<stdio.h>
void factorial();
int main(){
    printf("....Function without argument and without return value....\n");
    factorial();
return 0;
}
void factorial()
{
int i,n,fact=1;
printf("Enter a number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=fact*i;  
}
printf("factorial:%d\n",fact);
}

