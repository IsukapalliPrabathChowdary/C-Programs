/*Take three input integers x,y and z. 
Write a program to rotate their values such that,
 x has the value of y, y has the value of z and z has the value of x. 
Do this using pointers that point to x,y and z.*/

#include<stdio.h>
void swap();
int main()
{
int a,b,c;

printf("Enter a,b,c values: ");
scanf("%d%d%d",&a,&b,&c);
swap(&a,&b,&c);
}

void swap(int *p1,int *p2,int *p3)
{
int temp;
temp=*p1;
*p1=*p2;
*p2=*p3;
*p3=temp;

printf("a=%d, b=%d, c=%d",*p1,*p2,*p3);

}