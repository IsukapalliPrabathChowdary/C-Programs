#include <stdio.h>
void display();

int main()
{
    display();
    display();
}
void display()
{
    static int a = 1;
    a += 5;
    printf("a=%d\n",a);
}