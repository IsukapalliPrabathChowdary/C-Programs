#include<stdio.h>
int fun_alpha_num(char ch)
{
    if((ch>='0' && ch <='9')|| (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    return 1;
    return 0;
}
int main()
{
    char ch;
printf("Enter a character\n");
scanf("%c",&ch);
if(fun_alpha_num(ch))
printf("%c is a alphanumeric character",ch);
else
printf("%c is not a alphanumeric character",ch);
return 0;
}