#include<stdio.h>
int addition(int,int );
int subtraction(int,int);
int Multiply(int,int);
int division(int,int);
int remainder(int,int);

int main(){
int a,b,n=1;
printf("Enter values of a and b\n");
scanf("%d%d",&a,&b);
while(n!=6)
{
    options:
    printf("........Choose an option.........\n");
    printf("1.Addition\n");
    printf("2.subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Remainder\n");
    printf("6.Quit application\n");
    printf("Choose required arthimetic operation from options: ");
    scanf("%d",&n);
    printf("---------------------------\n");
    if(n>6)
    {
    printf("Wrong input..Select from the options\n");
    goto options;
    }
    
    switch(n)
    {

        case 1: printf("Addition=%d\n",addition(a,b));break;
        case 2: printf("Subtraction=%d\n",subtraction(a,b));break;
        case 3: printf("Multiplication=%d\n",Multiply(a,b));break;
        case 4: printf("Division=%d\n",division(a,b));break;
        case 5: printf("Remainder=%d\n",remainder(a,b));break;

    }
    printf("---------------------------\n");

}

return 0;
}


int addition(int m, int n)
{
    return m+n;
}
int subtraction(int m, int n)
{
    return m-n;
}
int Multiply(int m, int n)
{
    return m*n;
}
int division(int m, int n)
{
    return m/n;
}
int remainder(int m, int n)
{
    return m%n;
}
