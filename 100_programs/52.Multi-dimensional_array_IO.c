#include<stdio.h>
#define m 2
#define n 3
int main(){
    int a[m][n],i,j;

    printf("Enter elements in a array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Entered elements in a array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
    
return 0;
}