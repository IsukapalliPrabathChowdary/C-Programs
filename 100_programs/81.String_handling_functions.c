#include<stdio.h>
#include<string.h>
#define s 20
int main()
{
char s1[s]= "hello";
char s2[s]= "Hello";

printf("Length of string s1 is : %d\n",strlen(s1));
printf("copy of string s1 is : %s\n",strcpy(s1,s2));
char s3[s]= "iiES";
char s4[s]= "bangalore";
printf("concatination of string s1 is : %s\n",strcat(s3,s4));
printf("concatination of string s1 is : %s\n",strncat(s3,s4,9));
printf("lowercase of string s1 is : %s\n",strlwr(s3));
printf("uppercase of string s1 is : %s\n",strupr(s3));
char s5[s]= "hello";
char s6[s]= "world";
printf("cmparision of string s1 is : %d\n",strcmpi(s5,s6));
printf("comparision of string s1 is : %d\n",strcmp(s5,s6));
printf("memset of string s` is %s\n",memset(s5,'A',2));
printf("memset of string s` is %s\n",memcpy(s5,s6,1));


}