#include<stdio.h>
#define n 20
int mystrcmp(char str1[],char str2[]);
int main(){

char str1[n],str2[n];
int c;
printf("Enter a string1:");
fgets(str1,n,stdin);
printf("Enter a string2:");

fgets(str2,n,stdin);
c=mystrcmp(str1,str2);
if(c==0)
{
    printf("Both strings are same\n");
}
else
    printf("Both strings are different");
}

int mystrcmp(char s1[],char s2[])
{
int i;
for(i=0;s1[i]!='/0' || s2[i]!='/0';i++)
{
if(s1[i] !=s2[i] )
{
return (s1[i]-s2[i]);
break;
}
else 
return 0;
}
}