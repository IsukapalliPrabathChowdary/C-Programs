#include<stdio.h>

int main(){
int pswd=12345,epswd,count=0;

lab:
printf("Enter a password\n");
scanf("%d",&epswd);
if(pswd!=epswd)
{
    printf("Password not matched...Try agian\n");
    count++;
    if(count==3)
    {
     printf("Your account is blocked due to unsuccessful attempts\n");
         goto successful;
    }  
    goto lab;
}
printf("Password matched\n");
printf("Welcome Prabath\n");


successful:
return 0;
}