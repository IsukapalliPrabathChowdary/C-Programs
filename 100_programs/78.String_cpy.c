#include<stdio.h>
#include<string.h>
int main(){
char str1[]="iies";
char str2[]="bangalore";
printf("string1:%s",strcpy(str1,str2));
printf("\nstring1:%s",strcpy(str1,"delhi"));
return 0;
}