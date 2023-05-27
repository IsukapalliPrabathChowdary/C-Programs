#include<stdio.h>
#include<stdlib.h>

int main(){
int *p,n,i,m;
printf("Enter number of students:");
scanf("%d",&n);
p=(int*)malloc(n*(sizeof(int)));

for(i=0;i<n;i++)
{
    printf("Enter number of marks of student-%d:",i+1);
    scanf("%d",&p[i]);
}
printf("Enter number of new students:");
scanf("%d",&m);
p=(int *)realloc(p,m*sizeof(int));
printf("Enter marks of new students\n");

for(i=n;i<m;i++)
{
printf("Enter number of marks of student-%d:",i+1);
scanf("%d",&p[i]);
}
for(i=0;i<m;i++)
printf("Marks of student-%d:%d\n",i+1,p[i]);
free(p);
return 0;
}