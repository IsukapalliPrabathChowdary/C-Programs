#include<stdio.h>
int main(){
int r1,c1,r2,c2,i,j,k;
printf("How many rows in matrix-1:");
scanf("%d",&r1);
printf("How many coloumns in matrix-1:");
scanf("%d",&c1);
printf("Enter elements in matrix-1\n");
int m1[r1][c1];
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
     {
      scanf("%d",&m1[i][j]);
     }

}
printf("Entered elements in matrix-1\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
     {
      printf("%d\t",m1[i][j]);
     }
    printf("\n");
}

printf("How many rows in matrix-2:");
scanf("%d",&r2);
printf("How many coloumns in matrix-2:");
scanf("%d",&c2);
int m2[r2][c2],m3[r1][c2];
printf("Enter elements in matrix-2\n");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
     {
      scanf("%d",&m2[i][j]);
     }

}
printf("Entered elements in matrix-2\n");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
     {
      printf("%d\t",m2[i][j]);
     }
    printf("\n");
}

//Multiplication of two matrices
printf("Matrix multiplication is \n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        m3[i][j]=0;
        for(k=0;k<c1;k++)
        m3[i][j] += m1[i][k]*m2[k][j];
    }

}
printf("The resultant matrix is \n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
       
        printf("%5d",m3[i][j]);
    }
        printf("\n");
}
return 0;
}