#include<stdio.h>
#define n 30
#define t 15
#define m 1

struct bank{
    long long int account_number;
    long long int phone_number;
    char name[n];
    char account_type[t];
    char email_id[n];
};
void read_data(struct bank *);
void display(struct bank *);
int main(){
struct bank s[m];

//Taking deatails from customers

 
    read_data(s);
    
    printf("\n");
//Printing details of customers
 
     display(s);

    

return  0;
}
void read_data(struct bank *s)
{
    for(int i=0;i<m;i++)
    {
     printf("<---Enter details of Customer %d--->\n",i+1);
    printf("Enter Customer-name: ");
    scanf("%s",s[i].name);
    printf("Enter Account number: ");
    scanf("%I64d",&s[i].account_number);
    printf("Enter Account type(Savings or Current): ");
    scanf("%s",s[i].account_type);
    printf("Enter Phone number: ");
    scanf("%I64d",&s[i].phone_number);
    printf("Enter Email id: ");
    scanf("%s",s[i].email_id);
    
    }
}
void display(struct bank *p)
{
      for(int i=0;i<m;i++)
      {
         printf("<---- Customer-%d Details ---->\n",i+1);
         printf("Customer name: %s\n",p[i].name);
         printf("Account number: %I64d\n",p[i].account_number);
         printf("Account type: %s\n",p[i].account_type);
         printf("Phone number: %I64d\n",p[i].phone_number);
         printf("Email id: %s\n",p[i].email_id);
         printf("\n");
      }

}