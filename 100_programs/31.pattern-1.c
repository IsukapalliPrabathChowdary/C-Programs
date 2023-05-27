#include<stdio.h>
int main()
{
int i=1,j,n;
printf("Enter number of lines: ");
scanf("%d",&n);
while(i<=n)
{
for(j=1;j<=i;j++)
{
printf("* ");
}
printf("\n");
i++;
}
return 0;
}
