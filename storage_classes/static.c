#include<stdio.h>
 static int n;
void static_fun()
{
   
n=n+1;
printf("n=%d\n",n);

}
int main(){
printf("n=%d\n",n);
static_fun();
static_fun();
static_fun();
return 0;
}