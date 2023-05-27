#include<stdio.h>
struct student
{
    int id;
    char name[15];

}__attribute__((packed));
int main(){
    struct student s1;
printf("sizeof=%d",sizeof(s1));
return 0;
}