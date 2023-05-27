#include<stdio.h>
void calculator();
int main()
{
int a,b;
int add,sub,mul,div,mod;
printf("Enter two integer values:");
scanf("%d%d",&a,&b);
calculator(a,b,&add,&sub,&mul,&div,&mod);

printf("\nsum = %d",add);
printf("\ndifference = %d",sub);
printf("\nproduct = %d",mul);
printf("\nquotient = %d",div);
printf("\nremainder = %d",mod);


}
void calculator(int n1,int n2,int *add, int *sub,int *mul,int *div,int *mod)
{

	*add = n1+n2;
	*sub = n1-n2;
	*mul = n1*n2;
	*div = n1/n2;
	*mod = n1%n2;

}