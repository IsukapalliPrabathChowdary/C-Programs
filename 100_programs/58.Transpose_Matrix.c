#include<stdio.h>

int main(){
int r1,c1,i,j;
printf("Enter number of rows in the matrix:");
scanf("%d",&r1);
printf("Enter number of columns in the matrix:");
scanf("%d",&c1);
int m[r1][c1];
printf("Enter elements in the matrix\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    scanf("%5d",&m[i][j]);
}
printf(" Matrix is\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
    printf("%5d",m[i][j]);
    }
    printf("\n");
}
//Transpose above amatrix is
printf(" Transpose of above Matrix is\n");
for(i=0;i<c1;i++)
{
    for(j=0;j<r1;j++)
    {
    printf("%5d",m[j][i]);
    }
     printf("\n");
}
return 0;
}