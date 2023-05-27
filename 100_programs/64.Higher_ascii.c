/*Program to take input for two character variables using pointers and 
find out which character has higher ascii value.*/

#include<stdio.h>

int main()
{
char chr1,chr2,*p1=&chr1,*p2=&chr2;

printf("Enter two characters : ");
scanf("%c %c",p1,p2);

printf("Ascii value of character chr1 - %c is %d \nAscii value of character chr2 -%c is %d ",*p1,*p1,*p2,*p2);
if(chr1>chr2)
printf("\ncharacter '%c' has greater ascii value %d",*p1,*p1);
else
printf("\ncharacter '%c' has greater ascii value %d",*p2,*p2);

}