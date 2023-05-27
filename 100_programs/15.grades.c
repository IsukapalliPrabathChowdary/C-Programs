//print grade of a student
#include<stdio.h>

int main(){

float marks_1,marks_2,marks_3,marks_4,total,final_average;
char grade;
printf("Enter 4 subjects marks of the student:\n");
scanf("%f%f%f%f",&marks_1,&marks_2,&marks_3,&marks_4);

total= marks_1+marks_2+marks_3+marks_4;
final_average=total/4;
    
    if(final_average>85)
                grade='A';
    else if(final_average>70)
                grade='B';
    else if(final_average>60)
                grade='C';
    else if(final_average>40)
                grade='D';
    else
                grade='E';
    printf("Total marks=%.2f\n",total);
    printf("Percentage=%.2f,student grade is %c\n",final_average,grade);


            return 0;
}