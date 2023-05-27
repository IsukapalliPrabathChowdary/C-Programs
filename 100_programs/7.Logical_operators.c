#include<stdio.h>

int main(){
int n;
printf("Enter a digit between 1 to 100:");
scanf("%d",&n);
if((n>0) && (n<=100))
{
    printf("Entered number is between 0 and 10. Test case passed\n");
    if(n%2==0 ||n%5==0 )
    {
        printf("Entered number is divisible by 2 or 5\n");
        if(n%2==0)
        printf("Entered number is even\n");
        else
        printf("Entered number is odd\n");
    }
    else
        printf("Entered number is not divisible by 2 or 5");
}    
else
    printf("Entered number is not in the range specified 0-10. Try again!\n");
return 0;
}