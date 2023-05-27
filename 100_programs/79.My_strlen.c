#include<stdio.h>
#define n 20
int mystrlen(char str[]);
int main(){

char str[n];

printf("Enter a string:");
fgets(str,n,stdin);
printf("strintg length is %d\n",mystrlen(str));
return 0;
}


int mystrlen(char str[])
{
    int i,count=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!='\n')
        count++;
    }
    //count--;
    return count;
}