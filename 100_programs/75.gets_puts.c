#include<stdio.h>
#include<stdlib.h>
int main(){
char name[20];
printf("Enter a name using gets:");
gets(name);
printf("print name using puts:");
puts(name);

printf("Enter a name using fgets:");
fgets(name,20,stdin);
printf("print name using fputs:");
fputs(name,stdout);

return 0;
}