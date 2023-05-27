#include<stdio.h>
int power(int a, int b,int c)
{
    while(b>0)
{
c=c*a;
b--;
}
return c;
}
int main()
{
int a,b;
int c=1;

printf("Enter two integers:\n");
scanf("%d%d",&a,&b);

c = power(a,b,c) ;

printf("Answer = %d\n",c);
return 0;

}
