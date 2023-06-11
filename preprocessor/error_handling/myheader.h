#include<stdio.h>
#define ADD(x,y) (x)+(y)
#define SUB(x,y) (x)-(y)
#define MUL(x,y) (x)*(y)
#define DIV(x,y) (x)/(y)
int factorial(int a)
{
    if(a==1)
    return 1;
    return a*factorial(a-1);
}