#include<stdio.h>
#include<string.h>
#define m 20
#define n 5

struct student
{
    int id;
    char name[m];

};
void display(struct student);
int main(){
    struct student s[n];
    int i;
    for(i=0;i<n;i++)
    {
    printf("Enter student-%d id:",i+1);
    scanf("%d",&s[i].id);
    printf("Enter student-%d name:",i+1);
    scanf("%s",&s[i].name);
    }
    for(i=0;i<n;i++)
    {
     printf("<---- Student-%d Details ---->\n",i+1);
     display(s[i]);
    }

}

void display(struct student p)
{
      
    printf("id: %d\n",p.id);
    printf("Name: %s\n",strupr(p.name));
    printf("\n");

}