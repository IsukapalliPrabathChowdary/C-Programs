#include<stdio.h>

int main(){
    int a,b,n=1;
    ;
    printf("Enter values of a and b\n");
    scanf("%d%d",&a,&b);
  while(n!=6)
  {
    printf("1.Addition\n");
    printf("2.subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Remainder\n");
    printf("6.Quit application\n");
    printf("Choose required arthimetic operation:");
    scanf("%d",&n);
    printf("---------------------------\n");
    switch(n)
    {
        case 1: printf("addition:%d\n",a+b);break;
        case 2: printf("subtraction:%d\n",a-b);break;
        case 3: printf("multiplication:%d\n",a*b);break;
        case 4: printf("division:%d\n",a/b);break;
        case 5: printf("remainder:%d\n",a%b);break;
        case 6: printf("Application quitted..Thank younfor using our calculator!\n");break;
        default:printf("Entered wrong option...Try again!\n");break;
    }
    printf("---------------------------\n");
  }
  
return 0;
}