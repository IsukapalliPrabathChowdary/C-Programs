#include<stdio.h>
#include<string.h>
#define s 20
struct student
{
    int id;
    char name[s];
};
void main(){
    struct student s1,s2;
    printf("Enter student 1 id:");
    scanf("%d",&s1.id);
    printf("Enter student 2 id:");
    scanf("%d",&s2.id);

    printf("Enter student 1 name:");
    scanf("%s",&s1.name);
    printf("Enter student 2 name:");
    scanf("%s",&s2.name);
    printf("Student 1 name %s --->id-%d\n",strupr(s1.name),s1.id);
    printf("Student 2 name %s --->id-%d\n",strupr(s2.name),s2.id);


}