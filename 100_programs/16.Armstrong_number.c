#include<stdio.h>
#include<math.h>


int main(){
int num,input_num,temp,c=0,digit_value,digit_cube,armstrong_number=0;

printf("Enter a number\n");
scanf("%d",&num);
input_num=num;
temp=num;
while(temp>0)
{
c++;
temp=temp/10;

}
printf("digit count=%d\n",c);
while(num>0)
{
    digit_value=num%10;
        armstrong_number = armstrong_number + pow(digit_value,c);
    num=num/10;
   
}
    if(input_num == armstrong_number)
    
        printf("Entered number is armstrong number");
    
    else
        printf("Entered number is not a armstrong number");
return 0;
}