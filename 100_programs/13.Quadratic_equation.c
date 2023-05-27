#include<stdio.h>
#include<math.h>

int main(){
float a,b,c,r1,r2,discriminant,imr1,imr2;

printf("Enter a,b,c values:\n");
scanf("%f%f%f",&a,&b,&c);

discriminant= (b*b)-(4*a*c);

if(discriminant>0)
{
r1= (-b+sqrt(discriminant))/(2*a);
r2= (-b-sqrt(discriminant))/(2*a);
printf("Root1 = %.2f,Root2=%.2f",r1,r2);
}
else if(discriminant==0)
{
r1=r2= -b/(2*a);
printf("Root1 = %.2f,Root2= %.2f",r1,r2);
}
else
{
imr1= (-b+ sqrt(-discriminant))/(2*a);
imr2= (-b- sqrt(-discriminant))/(2*a);
printf("Root1=%.2fi , Root2= %.2fi",imr1,imr2);
}
return 0;
}