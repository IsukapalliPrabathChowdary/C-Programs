#include<stdio.h>

int main(){
int m1,avg;

printf("Enter marks:");
scanf("%d",&m1);
if(m1<=100)
{
    avg=m1/10;
    switch(avg)
    {
        case 10: 
        case 9: printf("Grade:A+\n");break;
        case 8: printf("Grade:A\n");break;
        case 7:printf("Grade:B\n");break;
        case 6:printf("Grade:C\n");break;
        case 5:printf("Grade:D\n");break;
        case 4:printf("Grade:E\n");break;
        default:printf("Grade:F\n");break;
        
    }
}
    else
        printf("Wrong input!Entered marks should between 0-100\n");
return 0;
}