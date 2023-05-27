#include<stdio.h>
#include<string.h>
#define s 20
int main(){
char char1[s],char2[s];
int n,i,length,alp=0,digit=0,ch=0;
enter:
printf("----------------------------\n");
printf("Enter your password\n");
printf("----------------------------\n");
printf("***Terms:must contain 8 to 12 charcters includes 1 special character(@,$,#,&,!),1 number and 1 character*** )\n");
printf("Password: ");
fgets(char1,s,stdin);
length=strlen(char1);
if(length<8 || length>12 )
{
    printf(">>Password not matched to our terms! renter<<\n");
    goto enter;
}
for(i=0;char1[i]!='\0';i++)
{
    if((char1[i]>65&& char1[i]<90)||(char1[i]>97&&char1[i]<122))
    alp++;
    if(char1[i]>48 && char1[i]<57)
    digit++;
    if(char1[i]=='@'||char1[i]=='#'||char1[i]=='$'||char1[i]=='&'||char1[i]=='!')
    ch++;
}
if(alp==0||digit==0||ch==0)
{
printf(">>Password not matched to our terms! renter<<\n");
 goto enter;
}
else
{
printf("Renter your password:");
fgets(char2,s,stdin);
n=strcmp(char1,char2);
if(n==0)
{
    printf("Your password set\n");
}
else
{
    printf("Password not matched!Re-enter\n");
    goto enter;
}
}
return 0;
}