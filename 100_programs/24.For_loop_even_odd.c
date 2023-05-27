#include<stdio.h>

int main(){
int limit,i;
printf("Enter end limit\n");
    scanf("%d",&limit);
printf("-----Even numbers----\n");
for(i=2;i<=limit;i+=2)
    printf("%d\n",i);

printf("-----Odd numbers----\n");
for(i=1;i<=limit;i+=2)
    printf("%d\n",i);


return 0;
}