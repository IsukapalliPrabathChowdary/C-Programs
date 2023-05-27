#include <stdio.h>
void display();
int a = 10;  // global variable
int main()
{
    ++a;
    printf("a= %d\n", a);     
    display();
    return 0;
}
void display()
{
    ++a;   
    printf("a= %d", a);
}