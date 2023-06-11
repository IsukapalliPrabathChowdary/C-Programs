#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];

};
void fun(struct student);
int main(){
struct student s1;
s1.id=10;
strcpy(s1.name,"prabath");
fun(s1);


return 0;
}
void fun(struct student s)
{
    printf("student id:%d,student name:%s",s.id,s.name);
}