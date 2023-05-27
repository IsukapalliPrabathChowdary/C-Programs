#include<stdio.h>
#define m 10
int main(){
int a[m][m],i,j,n;
printf("Enter number of lines:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
    {
        if(j==0||i==j)
        a[i][j]=1;
        else
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
}
printf("Pascal's triangle\n");
for(i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
    {
    printf("%5d",a[i][j]);
    }
    printf("\n");
}
return 0;
}