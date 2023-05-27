#include"100.myheader.h"
int main()
{
int a,b;
char ch;
printf("Enter two integers: ");
scanf("%d%d",&a,&b);

printf("Enter an operator\n");
scanf( " %c",&ch);
switch (ch)
{
 case '+':
		printf("%d + %d = %d",a,b,ADD(a,b));
                break;
case '-':
	printf("%d -%d = %d",a,b,SUB(a,b));
        break;
case'*':
	printf("%d*%d = %d",a,b,MUL(a,b));
	break;
case '/':
	printf("%d/%d = %d",a,b,DIV(a,b));
	break;
default:
      printf("Entered wrong operator");
}

}