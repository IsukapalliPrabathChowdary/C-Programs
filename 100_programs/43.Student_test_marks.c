//finding the highest student marks and displaying their roll number
#include<stdio.h>
int main()
{
int rollNum,m1,m2,m3,sum,highest = 0,r,count=0,i;
for(i=1;i<=3;i++)
{
    roll_number: printf("Enter Roll number in range 1 to 30\n");
                  scanf("%d",&rollNum);
                  if(rollNum<1 || rollNum>30)
                  {
                      printf("Not in range,Enter again\n");
                      goto roll_number;
                  }  
                   printf("Enter subject 1 marks\n");
                   scanf("%d",&m1);
                   printf("Enter subject 2 marks\n");
                   scanf("%d",&m2);
                   printf("Enter subject 3 marks\n");
                   scanf("%d",&m3); 

                   if(m1>=40 && m2>=40 && m3>=40 )
                   {
                     sum= m1+m2+m3;
                     if(highest <sum)

                     {
                      highest = sum;
                      r=rollNum;
                     }
                        if(sum>200)
                        count ++;


                   }
}
printf("Number of students got more than 200 are %d",count);
printf("\nHighest marks among students is %d to the roll number %d",highest,r);
return 0;
}