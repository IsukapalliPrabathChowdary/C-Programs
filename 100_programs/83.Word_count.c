#include<stdio.h>
#define s 100

int wordcount(char *);
int main()
{
char s1[s]="wow!this is really good.How did you wrote this program?";
printf("word count :%d",wordcount(s1));
return 0;
}


int wordcount(char *str)
{

int count=1;
for(;*str!='\0';)
{

if(*str== ' '|| *str ==',' || *str == '!'||*str == '?'||*str == '.')
count++;
*str++;
}

*str--;
if(*str== ' '|| *str ==',' || *str == '!'||*str == '?'||*str == '.')
count--;
return count;
}

