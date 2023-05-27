#include<stdio.h>
#define n 30
#define t 15
#define m 1
//Structure for bank details
struct bank{
    long long int account_number;
    long long int phone_number;
    char name[n];
    char account_type[t];
    char email_id[n];
};
//Function declaration section
void read_data(struct bank *s);
void display(struct bank *p);

//main function
int main(){
struct bank s[m];
int i;
//Taking deatails from customers
 for(i=0;i<m;i++)
    {
    printf("<---Enter details of Customer %d--->\n",i+1);
    read_data(&s[i]);
    }
    printf("\n");
//Printing details of customers
    for(i=0;i<m;i++)
    {
     printf("<---- Customer-%d Details ---->\n",i+1);
     display(&s[i]);
    }
    
return 0;
}
//Taking input of customer details
void read_data(struct bank *s)
{
    
    printf("Enter Customer-name: ");
    scanf("%s",s->name);
    printf("Enter Account number: ");
    scanf("%lld",&s->account_number);
    printf("Enter Account type(Savings or Current): ");
    scanf("%s",s->account_type);
    printf("Enter Phone number: ");
    scanf("%lld",&s->phone_number);
    printf("Enter Email id: ");
    scanf("%s",s->email_id);
    
}

//printing details of the customers
void display(struct bank *p)
{
      
    printf("Customer name: %s\n",p->name);
    printf("Account number: %lld\n",p->account_number);
     printf("Account type: %s\n",p->account_type);
      printf("Phone number: %lld\n",p->phone_number);
       printf("Email id: %s\n",p->email_id);
        printf("\n");

}